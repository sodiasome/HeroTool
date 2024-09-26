#include "NotePad.h"
#include <QFile>
#include <QFileDialog>
#include <QFontDialog> 
#include <QDebug>
#include <QStringListModel>
#include <QListView>
#include <QDateTime>
#include <QDate>
#include <QTime>
#include <QMessageBox>
#include <QSettings>
#include <QTextBlock>

NotePad::NotePad(QWidget *parent)
	: QWidget(parent)
    , m_nMode(Node)
{
	ui.setupUi(this);
    _intiUi();
    _connect();
}

NotePad::~NotePad()
{}

void NotePad::_intiUi()
{
    if (m_nMode == Node)
        m_textFmt = ui.edNote->currentCharFormat();
    else if (m_nMode == Code)
        m_textFmt = ui.edDisplay->currentCharFormat();

    QFont font;
    const int tabStop = 4; 
    QFontMetrics metrics(font);
    ui.edNote->setTabStopWidth(tabStop * metrics.width(' '));
    ui.edDisplay->setTabStopWidth(tabStop * metrics.width(' '));
   
    _checkMode();
}

void NotePad::_connect()
{
    //笔记编辑
    connect(ui.edNote, &QTextEdit::textChanged, this, &NotePad::editting);

    connect(ui.edNote, &NoteEditer::mousePress, this, [this](QTextCursor cursor) {
        m_nMouseOff = cursor.position();
        });
    connect(ui.edNote, &NoteEditer::mouseRelease, this, [this](QTextCursor cursor) {
        int nEndPod = cursor.position();
        });
}

void NotePad::_checkMode()
{
    if (m_nMode == Node)
    {
        ui.edNote->setVisible(true);
        ui.edDisplay->setVisible(false);
    }
    else if(m_nMode == Code)
    {
        ui.edNote->setVisible(false);
        ui.edDisplay->setVisible(true);
    }
}

void NotePad::closeFile()
{
    ui.edNote->clear();
    ui.edDisplay->clear();
}

void NotePad::openFile(QString sPath)
{
	m_sCurrEditFile = sPath;
    _checkMode();

    QFile file(m_sCurrEditFile);
    if (file.open(QFile::ReadWrite))
    {
        ui.edNote->clear();
        ui.edDisplay->clear();
        QTextStream stream(&file);
        if (!stream.atEnd())
        {
            //显示到控件
            stream.setCodec("UTF-8");
            QString sContent = stream.readAll();
            if (m_nMode == Node)
                ui.edNote->setText(sContent);
            else if(m_nMode == Code)
                ui.edDisplay->setPlainText(sContent);
        }
    }
    file.close();
    
    //恢复光标
    if (m_nMode == Node)
    {
        ui.edNote->setFocus();
        QSettings iniConfig("config.ini", QSettings::IniFormat);
        int nRow = iniConfig.value(sPath).toInt();

        QTextCursor tmpCursor = ui.edNote->textCursor();
        tmpCursor.setPosition(nRow);
        ui.edNote->setTextCursor(tmpCursor);
    }
}

void NotePad::saveFile(QString sPath)
{
	m_sCurrEditFile = sPath;
    QTextCursor tc;

    QFile fNote;
    fNote.setFileName(m_sCurrEditFile);
    fNote.open(QFile::WriteOnly | QFile::Truncate);
    QTextStream stream(&fNote);
    stream.setCodec("UTF-8");

    if (m_nMode == Node)
    {
        if (sPath.endsWith(".rtf"))
            stream << ui.edNote->toHtml().toUtf8();
        else if (sPath.endsWith(".txt"))
            stream << ui.edNote->toPlainText().toUtf8();
        else
        {
            fNote.close();
            return;
        }
        tc = ui.edNote->textCursor();
    }
    else if (m_nMode == Code)
    {
        if (sPath.endsWith(".txt")
            || sPath.endsWith(".cpp")
            || sPath.endsWith(".h"))
            stream << ui.edDisplay->toPlainText().toUtf8();
        else
        {
            fNote.close();
            return;
        }
        tc = ui.edDisplay->textCursor();
    }
    fNote.close();

    //记录鼠标光标位置
    QTextLayout* pLayout = tc.block().layout();
    int nCol = tc.position() - tc.block().position();
    int nRow = pLayout->lineForTextPosition(nCol).lineNumber() + tc.block().firstLineNumber();
    QSettings iniConfig("config.ini", QSettings::IniFormat);
    iniConfig.setValue(sPath, nRow);
}

void NotePad::setAlignment(Qt::AlignmentFlag flag)
{
    if (m_nMode == Node) ui.edNote->setAlignment(flag);
}

void NotePad::updateTextFormat()
{
    if (m_nMode == Node)
    {
        QTextCursor cursor = ui.edNote->textCursor();
        cursor.mergeCharFormat(m_textFmt);
    }
}

void NotePad::insertPicture()
{
    if (m_nMode == Node)
    {
        QString sFile = QFileDialog::getOpenFileName(this, tr("Select an image"),
            "D:\\", tr("Bitmap Files (*.bmp)\n"
                "JPEG (*.jpg *jpeg)\n"
                "GIF (*.gif)\n"
                "PNG (*.png)\n"));
        if (!sFile.isEmpty())
        {
            QUrl url(sFile);
            //QImage image = QImageReader(sFile).read();
            QString sImg = QString("<img src=\"%1\"/>").arg(sFile);
            ui.edNote->append(sImg);
        }
    }
}

void NotePad::insertCurrTime()
{
    QDate date = QDate::currentDate();
    QTime time = QTime::currentTime();
    QLocale locale = QLocale::Chinese;
    QString sDateTime = QString("%1年%2月%3日 %4:%5:%6 %7 ")
        .arg(date.year(), 4, 10, QLatin1Char('0'))
        .arg(date.month(), 2, 10, QLatin1Char('0'))
        .arg(date.day(), 2, 10, QLatin1Char('0'))
        .arg(time.hour(), 2, 10, QLatin1Char('0'))
        .arg(time.minute(), 2, 10, QLatin1Char('0'))
        .arg(time.second(), 2, 10, QLatin1Char('0'))
        .arg(locale.toString(QDateTime::currentDateTime(), QString("dddd")));

    if (m_nMode == Node)
    {
        QTextCursor tTextCursor = ui.edNote->textCursor();
        QTextCharFormat charformat = tTextCursor.charFormat();
        tTextCursor.insertText("\n" + sDateTime, charformat);

        //ui.edNote->insertPlainText("\n" + sDateTime);
    }
}

void NotePad::setFontFormat()
{
    bool bOK = false;
    QFont font = QFontDialog::getFont(&bOK);
    if (bOK)
    {
        if (m_nMode == Node)
        {
            ui.edNote->setFont(font);
        }
    }
}

void NotePad::setMode(int nModde)
{
    m_nMode = nModde;
    _checkMode();
}

void NotePad::setFofmat(bool bFormat)
{
    if (m_nMode == Node)
    {
        ui.edNote->setFormat(bFormat);

        //不支持格式刷

    }
}

void NotePad::setNoteDown()
{
    if (m_nMode == Node)
    {
        QTextCursor tTextCursor = ui.edNote->textCursor();
        QTextCharFormat charformat = tTextCursor.charFormat();
       

        //打开笔记窗口
        //...

        QString anchorName = tTextCursor.selectedText();
        static QString sPre = "";
        if (sPre == anchorName)
        {
            //重复操作代表删除
            charformat.setForeground(QColor(0, 0, 0));
            charformat.setAnchor(false);
            //QSettings iniConfig("config.ini", QSettings::IniFormat);
            //QString pinyin = noteWindow->getChineseSpell(anchorName);
            //pinyin.replace("/", "-");
            //iniConfig.remove(pinyin);

            sPre = "";
        }
        else
        {     
            charformat.setForeground(QColor(80, 20, 250));
            charformat.setAnchor(true);
            sPre = anchorName;
        }
            

        charformat.setAnchorName(anchorName);

        tTextCursor.setCharFormat(charformat);
    }
}

QString NotePad::getFileType()
{
    if (m_nMode == Node)
    {
        return QString(NoteType);
    }
    else if (m_nMode == Code)
    {
        return QString(CodeType);
    }
    return QString("");
}



