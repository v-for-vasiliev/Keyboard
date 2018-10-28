#include "keyboard.h"
#include "ui_keyboard.h"
#include <QDebug>
#include <QMessageBox>

Keyboard::Keyboard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Keyboard)
{
    ui->setupUi(this);
    this->ui->lineEdit->setText("asf");
}

Keyboard::~Keyboard()
{
    delete ui;
}

void Keyboard::addPasswdChar(QString value)
{
    this->ui->lineEdit->setText(this->ui->lineEdit->text() + value);
}

void Keyboard::on_pushButton_clicked()
{
    addPasswdChar("1");
}

void Keyboard::on_pushButton_2_clicked()
{
    addPasswdChar("2");
}

void Keyboard::on_pushButton_3_clicked()
{
    addPasswdChar("3");
}

void Keyboard::on_pushButton_4_clicked()
{
    addPasswdChar("4");
}

void Keyboard::on_pushButton_5_clicked()
{
    addPasswdChar("5");
}

void Keyboard::on_pushButton_6_clicked()
{
    addPasswdChar("6");
}

void Keyboard::on_pushButton_7_clicked()
{
    addPasswdChar("7");
}

void Keyboard::on_pushButton_8_clicked()
{
    addPasswdChar("8");
}

void Keyboard::on_pushButton_9_clicked()
{
    addPasswdChar("9");
}

void Keyboard::on_pushButton_10_clicked()
{
    addPasswdChar("0");
}

void Keyboard::on_pushButton_11_clicked()
{
    addPasswdChar(".");
}

void Keyboard::on_pushButton_12_clicked()
{
    addPasswdChar(":");
}

void Keyboard::on_pushButton_13_clicked()
{
    this->ui->lineEdit->backspace();
}

void Keyboard::on_pushButton_14_clicked()
{
    QMessageBox::information(this, "Value:", this->ui->lineEdit->text(), 0);
}

void Keyboard::on_checkBox_stateChanged(int arg1)
{
    switch(arg1)
    {
    case 2:
        this->ui->lineEdit->setEchoMode(QLineEdit::Password);
        break;
    case 0:
        this->ui->lineEdit->setEchoMode(QLineEdit::Normal);
        break;
    default:
        break;
    }
}
