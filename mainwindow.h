#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_refresh_clicked();

    void on_tableWidget_word_list_clicked(const QModelIndex &index);

    void on_pushButton_add_new_word_clicked();

private:
    Ui::MainWindow *ui;
    void reload_wordlist();

};

#endif // MAINWINDOW_H
