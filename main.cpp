#include "mainwindow.h"
#include <QApplication>
#include "formmain.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

   // QTextCodec::setCodecForCStrings(QTextCodec::codecForName("GB2312"));
  //  QTextCodec::setCodecForLocale(QTextCodec::codecForName("GB2312"));
   // QTextCodec::setCodecForTr(QTextCodec::codecForName("GB2312"));

    FormMain w;
    w.show();
    
    return a.exec();
}
