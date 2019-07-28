#include "formmain.h"
#include "ui_formmain.h"
#include <QApplication>
#include <QDesktopWidget>
#include <QDebug>
FormMain::FormMain(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormMain)
{
    qDebug("width=%d,height=%d", QApplication::desktop()->width(),QApplication::desktop()->height());
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowMinimizeButtonHint);
    // 设置窗口背景透明;
    //setAttribute(Qt::WA_TranslucentBackground);

    // 注意！！！如果是主窗口不要设置WA_DeleteOnClose属性;
    // 关闭窗口时释放资源;
    //setAttribute(Qt::WA_DeleteOnClose);
    resize(1024,600);

    //this->setWindowOpacity(0.3);//设置透明1-全体透明
    //this->setAttribute(Qt::WA_TranslucentBackground, true);//设置透明2-窗体标题栏不透明,背景透明


    //this->initTitleBar();
}
void FormMain::initTitleBar()
{
    // 设置标题栏跑马灯效果，可以不设置;

}
FormMain::~FormMain()
{
    delete ui;
}
