#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    close();
}

void MainWindow::on_leText1_editingFinished()
{
   Text=ui->leText1->text();
   ui->tbWyswietl->append(Text);
}

void MainWindow::on_pbWyczysc_clicked()
{
    ui->tbWyswietl->clear();
}

void MainWindow::on_fontComboBox_currentFontChanged(const QFont &f)
{
    ui->tbWyswietl->setFont(f);
}

void MainWindow::on_rbB_toggled(bool checked)
{
    ui->tbWyswietl->setFontUnderline(checked);
}

void MainWindow::on_dial_valueChanged(int value)
{
    ui->tbWyswietl->setFontWeight(value);
    ui->lcdNumber->display(value);
}

void MainWindow::on_rbI_toggled(bool checked)
{
    ui->tbWyswietl->setFontItalic(checked);
}
