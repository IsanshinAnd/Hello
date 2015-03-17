#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

namespace Ui {
class MyWidget;
}

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MyWidget(QWidget *parent = 0);
    ~MyWidget();

private:
    Ui::MyWidget *ui;
    double r;
public slots:
    void MyEventHandler();
private slots:
    void on_PButton_clicked();
    void on_MButton_clicked();
    void on_UButton_clicked();
    void on_DButton_clicked();
};

#endif // MYWIDGET_H
