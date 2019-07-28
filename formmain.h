#ifndef FORMMAIN_H
#define FORMMAIN_H

#include <QWidget>
#include "basewindow.h"
namespace Ui {
class FormMain;
}

class FormMain : public QWidget
{
    Q_OBJECT
    
public:
    explicit FormMain(QWidget *parent = 0);
    ~FormMain();
    
    void initTitleBar();
private:
    Ui::FormMain *ui;
};

#endif // FORMMAIN_H
