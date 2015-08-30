#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTableWidget>
#include <QTableWidgetItem>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QSqlDatabase db  = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("words.db");     //连接数据库
    if(!db.open())
    {
        qDebug()<< "database is error";
    }
    else
    {
        qDebug()<<"database is ok";
    }
    ui->tableWidget_word_list->horizontalHeader()->setStretchLastSection(true); //表格表头
    reload_wordlist();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_refresh_clicked()
{
    reload_wordlist();
}

void MainWindow::reload_wordlist()
{
    QSqlQuery query;
    QTableWidgetItem * table_item;
    query.exec("select * from words order by w_id");
    ui->tableWidget_word_list->setRowCount(0);
    int row_count;
    row_count=ui->tableWidget_word_list->rowCount();
    while(query.next())
    {
        row_count=ui->tableWidget_word_list->rowCount(); //获取表单行数
        ui->tableWidget_word_list->insertRow(row_count);

        table_item = new QTableWidgetItem(query.value(3).toString());
        ui->tableWidget_word_list->setItem(row_count,0,table_item);
        table_item->setTextAlignment(Qt::AlignCenter);

        table_item = new QTableWidgetItem(query.value(1).toString());
        ui->tableWidget_word_list->setItem(row_count,1,table_item);
        table_item->setTextAlignment(Qt::AlignCenter);

        table_item = new QTableWidgetItem(query.value(2).toString());
        ui->tableWidget_word_list->setItem(row_count,2,table_item);
        table_item->setTextAlignment(Qt::AlignCenter);
    }
}

void MainWindow::on_tableWidget_word_list_clicked(const QModelIndex &index)
{
    QTableWidgetItem * cur_item = ui->tableWidget_word_list->currentItem();
//    qDebug()<<ui->tableWidget_word_list->item(cur_item->row(),1)->text();


    ui->label_word->setText(ui->tableWidget_word_list->item(cur_item->row(),1)->text());
    ui->label_mem_time->setText("记忆次数:"+ui->tableWidget_word_list->item(cur_item->row(),0)->text());
    ui->label_explain->setText(ui->tableWidget_word_list->item(cur_item->row(),2)->text());
    QSqlQuery query;
    query.exec(QString("select * from word_sample where w_word='%1'").arg(ui->tableWidget_word_list->item(cur_item->row(),1)->text()));
    QListWidgetItem * listItem;
//    qDebug()<<query.lastError();
    ui->listWidget_sample->clear();
    while(query.next())
    {
//        qDebug()<<query.value(2).toString();
        listItem = new QListWidgetItem(ui->listWidget_sample);
        listItem->setText(query.value(2).toString());

        listItem = new QListWidgetItem(ui->listWidget_sample);
        listItem->setText("     "+query.value(3).toString());
    }
    int times = ui->tableWidget_word_list->item(cur_item->row(),0)->text().toInt();
    times++;
    qDebug()<<times;
    QSqlQuery query2;
    query2.exec(QString("UPDATE words SET w_memory_time = %1 WHERE w_word = '%2' ")
                .arg(QString::number(times))
                .arg(ui->tableWidget_word_list->item(cur_item->row(),1)->text()));
    qDebug()<<query2.lastError();
    reload_wordlist();
}

void MainWindow::on_pushButton_add_new_word_clicked()
{

}
