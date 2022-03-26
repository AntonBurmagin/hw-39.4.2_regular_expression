#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QRegularExpression>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setAlignment(Qt::AlignCenter);
    ui->lineEdit->setFixedHeight(50);
    QFont font("Times", 20, QFont::Light);
    ui->lineEdit->setFont(font);
    ui->label->setFont(QFont("Arial", 50, QFont::ExtraBold));
    connect(ui->lineEdit, &QLineEdit::textEdited, ui->label, [this](QString currentText) {
       QRegularExpression exp("^\\+\\d\\d\\d\\d\\d\\d\\d\\d\\d\\d\\d$");
       QRegularExpression exp2("^\\+\\d{11}$");
       QRegularExpression exp3("^\\+[0-9]{11}$");
       if (exp3.match(currentText).hasMatch())
           setOkLabel();
       else
           setNotOkLabel();
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setOkLabel()
{
    ui->label->setText("OK");

    ui->label->setStyleSheet("QLabel{color: green;}");
}

void MainWindow::setNotOkLabel()
{
    ui->label->setText("ERROR");
    ui->label->setStyleSheet("QLabel{color: red;}");
}

