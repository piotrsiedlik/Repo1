#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    QString Text;

private slots:
    void on_pushButton_clicked();

    void on_leText1_editingFinished();

    void on_pbWyczysc_clicked();

    void on_fontComboBox_currentFontChanged(const QFont &f);

    void on_rbB_toggled(bool checked);

    void on_dial_valueChanged(int value);

    void on_rbI_toggled(bool checked);

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
