#include "mywidget.h"
#include "ui_mywidget.h"

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    r = 0;
    ui->MyLabel->setText("My first calculator: ");
    QObject::connect(ui-> MyButton_2, SIGNAL(clicked()),this,SLOT(MyEventHandler()));
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::MyEventHandler()
{
    ui->lineEdit_R->setText(QString::number(r));
}


void MyWidget::on_PButton_clicked()
{
    double a,b;
    b = ui->lineEdit->text().toDouble();
    a = ui->lineEdit1->text().toDouble();
    r = a+b;
}

void MyWidget::on_MButton_clicked()
{   double a,b;
    b = ui->lineEdit->text().toDouble();
    a = ui->lineEdit1->text().toDouble();
    r = a-b;
}

void MyWidget::on_UButton_clicked()
{   double a,b;
    b = ui->lineEdit->text().toDouble();
    a = ui->lineEdit1->text().toDouble();
    r = a*b;
}

void MyWidget::on_DButton_clicked()
{   double a,b;
    b = ui->lineEdit->text().toDouble();
    a = ui->lineEdit1->text().toDouble();
    r = a/b;
}
