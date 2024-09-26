#include "NoteEditer.h"
#include <QDebug>
#include <QMenu>
#include <QTextBlock>
#include <QDockWidget>
#include <QVBoxLayout>
#include <QSettings>
#include "NoteDownWindow.h"

NoteEditer::NoteEditer(QWidget *parent)
	: QTextEdit(parent)
    , m_bFormat(false)
    , m_bMousePress(false)
{}

NoteEditer::~NoteEditer()
{}
void NoteEditer::openEditView()
{
    QTextCursor tTextCursor = textCursor();
    if (tTextCursor.hasSelection())
        return;
    QTextCharFormat charformat = tTextCursor.charFormat();
    if (!charformat.isAnchor() && !tTextCursor.atEnd())
    {
        tTextCursor.movePosition(QTextCursor::Right);
        charformat = tTextCursor.charFormat();
    }

    if (charformat.isAnchor())
    {
        QTextBlock block = tTextCursor.block();
        QString text = block.text();
        m_nTextEndIndex = tTextCursor.position();
        m_nTextStartIndex = m_nTextEndIndex - 1;
        QString sKey;
        if (tTextCursor.movePosition(QTextCursor::Left))
        {
            QTextCharFormat fmt1 = tTextCursor.charFormat();
            sKey = fmt1.anchorName();
            while (fmt1.anchorName() == charformat.anchorName() && fmt1.isAnchor())
            {

                if (!tTextCursor.movePosition(QTextCursor::Left))
                    break;
                m_nTextStartIndex = tTextCursor.position();
                fmt1 = tTextCursor.charFormat();
            }
        }

        if (tTextCursor.movePosition(QTextCursor::Right))
        {
            QTextCharFormat fmt1 = tTextCursor.charFormat();
            sKey = fmt1.anchorName();
            while (fmt1.anchorName() == charformat.anchorName())
            {
                m_nTextEndIndex = tTextCursor.position();
                if (!tTextCursor.movePosition(QTextCursor::Right))
                    break;
                fmt1 = tTextCursor.charFormat();
            }
        }

        //获取笔记路径并打开
        QSettings iniConfig("config.ini", QSettings::IniFormat);
        //QString sColor = iniConfig.value("TabBkColor").toString();
        NoteDownWindow* noteWindow = new NoteDownWindow();
        noteWindow->m_pTextEdit = new QTextEdit(noteWindow);
        //noteWindow->m_pTextEdit->setStyleSheet("background-color:" + sColor + ";");
        noteWindow->m_sFile = sKey;
        QString pinyin = noteWindow->getChineseSpell(sKey);
        pinyin.replace("/", "-");
        pinyin.replace(":", "");
        noteWindow->m_pTextEdit->setGeometry(0, 0, noteWindow->width(), noteWindow->height());
        //打开笔记
        QString path = iniConfig.value(pinyin).toString();
        if (!path.isEmpty())
        {
            QFile file(path);
            if (file.open(QFile::ReadWrite))
            {
                noteWindow->m_pTextEdit->clear();
                QTextStream stream(&file);
                if (!stream.atEnd())
                {
                    //显示到控件
                    stream.setCodec("UTF-8");
                    QString sContent = stream.readAll();

                    noteWindow->m_pTextEdit->setText(sContent);
                }
            }
            file.close();
        }
        QVBoxLayout* hLayout = new QVBoxLayout(noteWindow);
        hLayout->addWidget(noteWindow->m_pTextEdit);
        noteWindow->setLayout(hLayout);
        noteWindow->setWindowTitle(sKey);
        noteWindow->show();

        

        //QMenu menu;
        //text = text.right(text.length() - m_nTextStartIndex);
        //text = text.left(m_nTextEndIndex - m_nTextStartIndex);
        //
        //int id = charformat.anchorName().toInt();
        //for (int i = 0; i < m_OptionsMap[id].size(); i++)
        //{
        //    QAction* pAction = menu.addAction(m_OptionsMap[id][i]);
        //    connect(pAction, &QAction::triggered, [=]() {
        //        QTextCursor text_cursor = textCursor();
        //        for (int i = m_nTextEndIndex; i >= m_nTextStartIndex; i--)
        //        {
        //            text_cursor.setPosition(i);
        //            QTextCharFormat ff = text_cursor.charFormat();
        //            if (ff.anchorName() == charformat.anchorName())
        //            {
        //                text_cursor.deletePreviousChar();
        //            }
        //            else
        //            {
        //                break;
        //            }
        //        }
        //        text_cursor.insertText(m_OptionsMap[id][i], charformat);
        //        });
        //}
        //QAction* viewNode = menu.addAction(tr("查看笔记"));
        //QAction* editNode = menu.addAction(tr("编辑笔记"));
        //menu.move(cursor().pos());
        //menu.setStyleSheet("* {font-size: 12pt}");
        //menu.exec();
    }
    return;
}
void NoteEditer::mousePressEvent(QMouseEvent* event)
{  
    if (event->button() == Qt::LeftButton) 
    {
        QTextCursor tTextCursor = this->textCursor();
        m_bMousePress = true;

        if (m_bFormat)
        {
            emit mousePress(tTextCursor);

        }
    }
    else if (event->button() == Qt::RightButton)
    {

    }

    QTextEdit::mousePressEvent(event);
}

void NoteEditer::mouseReleaseEvent(QMouseEvent* event)
{
    if (event->button() == Qt::LeftButton && m_bMousePress) 
    {
        QTextCursor tTextCursor = this->textCursor();
        if (m_bFormat)
        {
            emit mouseRelease(tTextCursor);
            m_bFormat = false;
        }
        m_bMousePress = false;

        //查看编辑笔记
        openEditView();
    }
    else if (event->button() == Qt::RightButton)
    {
        
    }

    QTextEdit::mouseReleaseEvent(event);
}
