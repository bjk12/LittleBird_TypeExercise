#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //设定全局字体大小
    QFont font  = a.font();
    font.setPointSize(18);
    a.setFont(font);
    QFile qss(":/stylesheet.qss");
   if( qss.open(QFile::ReadOnly))
   {
       qDebug("open success");
       QString style = QLatin1String(qss.readAll());
       a.setStyleSheet(style);
       qss.close();
   }
   else
   {
      qDebug("Open failed");
   }
    //设定背景图片
    MainWindow w;
//    QIcon icon = QIcon(":/bjk1.ico");
//    w.setWindowIcon(icon);
    w.show();
    return a.exec();
}
