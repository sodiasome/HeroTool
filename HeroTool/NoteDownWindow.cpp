#include "NoteDownWindow.h"
#include <QSettings>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QTextCodec>
#include <QMessageBox>

NoteDownWindow::NoteDownWindow(QWidget *parent)
	: QWidget(parent)
    , m_sFile("")
    , m_pTextEdit(nullptr)
{
	ui.setupUi(this);
    //this->setWindowFlags(windowFlags() & ~Qt::WindowMaximizeButtonHint);
}

NoteDownWindow::~NoteDownWindow()
{}

void NoteDownWindow::closeEvent(QCloseEvent * event)
{
    if (nullptr == m_pTextEdit)
        return;

    if (m_pTextEdit->toPlainText().isEmpty())
    {
        return;
    }

    QSettings iniConfig("config.ini", QSettings::IniFormat);
    QString sDir = iniConfig.value("NoteDownDir").toString();
    if (sDir.isEmpty())
        sDir = "D:/";
    //过滤url
    m_sFile.replace("/","-");
    m_sFile.replace(":","");
    //关闭笔记小窗口自动保存笔记
    QString sPath = sDir + "/" + m_sFile + ".rtf";
    QFile fNote;
    fNote.setFileName(sPath);
    fNote.open(QFile::WriteOnly | QFile::Truncate);
    QTextStream stream(&fNote);
    stream.setCodec("UTF-8");


    if (sPath.endsWith(".rtf"))
        stream << m_pTextEdit->toHtml().toUtf8();
    else if (sPath.endsWith(".txt"))
        stream << m_pTextEdit->toPlainText().toUtf8();
    else
    {
        fNote.close();
        return;
    }
    fNote.close();

    QString character = getChineseSpell(m_sFile);
    iniConfig.setValue(character, sPath);
}

void NoteDownWindow::resizeEvent(QResizeEvent* event)
{
    if (nullptr != m_pTextEdit)
    {
        m_pTextEdit->setGeometry(0, 0, this->width(), this->height());
    }
}


QString NoteDownWindow::getChineseSpell(QString& src)
{
    QTextCodec* codec4gbk = QTextCodec::codecForName("GBK"); //获取qt提供的gbk的解码器
    QByteArray buf = codec4gbk->fromUnicode(src); //qt用的unicode，转成gbk
    int size = buf.size();
    quint16* array = new quint16[size + 1];
    QString alphbats;

    for (int i = 0, j = 0; i < buf.size(); i++, j++)
    {
        if ((quint8)buf[i] < 0x80) //gbk的第一个字节都大于0x81，所以小于0x80的都是符号，字母，数字etc
            continue;
        array[j] = (((quint8)buf[i]) << 8) + (quint8)buf[i + 1]; //计算gbk编码
        i++;
        alphbats.append(FirstLetter(array[j])); //相当于查表，用gbk编码得到首拼音字母
    }
    delete[] array;

    if (alphbats.size() <= 0)
        return src;

    return alphbats;
}
bool In(wchar_t start, wchar_t end, wchar_t code)
{
    if (code >= start && code <= end)
    {
        return true;
    }
    return false;
}

QString NoteDownWindow::FirstLetter(int n)
{
    if (In(0xB0A1, 0xB0C4, n)) return 'a';
    if (In(0XB0C5, 0XB2C0, n)) return 'b';
    if (In(0xB2C1, 0xB4ED, n)) return 'c';
    if (In(0xB4EE, 0xB6E9, n)) return 'd';
    if (In(0xB6EA, 0xB7A1, n)) return 'e';
    if (In(0xB7A2, 0xB8c0, n)) return 'f';
    if (In(0xB8C1, 0xB9FD, n)) return 'g';
    if (In(0xB9FE, 0xBBF6, n)) return 'h';
    if (In(0xBBF7, 0xBFA5, n)) return 'j';
    if (In(0xBFA6, 0xC0AB, n)) return 'k';
    if (In(0xC0AC, 0xC2E7, n)) return 'l';
    if (In(0xC2E8, 0xC4C2, n)) return 'm';
    if (In(0xC4C3, 0xC5B5, n)) return 'n';
    if (In(0xC5B6, 0xC5BD, n)) return 'o';
    if (In(0xC5BE, 0xC6D9, n)) return 'p';
    if (In(0xC6DA, 0xC8BA, n)) return 'q';
    if (In(0xC8BB, 0xC8F5, n)) return 'r';
    if (In(0xC8F6, 0xCBF0, n)) return 's';
    if (In(0xCBFA, 0xCDD9, n)) return 't';
    if (In(0xCDDA, 0xCEF3, n)) return 'w';
    if (In(0xCEF4, 0xD188, n)) return 'x';
    if (In(0xD1B9, 0xD4D0, n)) return 'y';
    if (In(0xD4D1, 0xD7F9, n)) return 'z';
    return '\0';
}

