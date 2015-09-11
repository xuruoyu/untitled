#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QSqlDatabase db  = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("//Users//xuruoyu/Documents//words.db");     //连接数据库
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
    reload_wordListFroSample();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_refresh_clicked()
{
    QSqlQuery query;
    query.exec(QString("select w_memory_time,w_id from words where w_word='%1'").arg(ui->label_word->text()));
    query.first();
    int times = query.value(0).toInt();
    times--;
//    qDebug()<<times;
    QSqlQuery query2;
    query2.exec(QString("UPDATE words SET w_memory_time = %1 WHERE w_word = '%2' ")
                .arg(QString::number(times))
                .arg(ui->label_word->text()));
//    qDebug()<<query2.lastError();
    QDateTime current_date_time = QDateTime::currentDateTime();
    QString current_date = current_date_time.toString("yyyy-MM-dd hh:mm:ss");
    query2.exec(QString("insert into rembered (w_id,time,rembered) values ('%1','%2',0)")
                .arg(query.value(1).toString())
                .arg(current_date));
    ui->label_mem_time->setText("记忆次数:"+QString::number(times));
    reload_wordlist();
}

void MainWindow::reload_wordlist()
{
    QSqlQuery query;
    QTableWidgetItem * table_item;
    query.exec("select * from words order by w_memory_time");
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
        table_item->setBackgroundColor(QColor(110,185,50));
        table_item->setTextColor(QColor(255,255,255));
        if(query.value(3).toInt()<=0)
        {
            table_item->setTextColor(QColor(255,0,0));
            table_item->setBackgroundColor(QColor(0,0,0));
        }
        if(query.value(3).toInt()>=5)
        {
            table_item->setTextColor(QColor(0,255,0));
            table_item->setBackgroundColor(QColor(142,142,142));
        }



        table_item = new QTableWidgetItem(query.value(1).toString());
        ui->tableWidget_word_list->setItem(row_count,1,table_item);
        table_item->setTextAlignment(Qt::AlignCenter);
        table_item->setBackgroundColor(QColor(110,185,50));
        table_item->setTextColor(QColor(255,255,255));
        if(query.value(3).toInt()<=0)
        {
            table_item->setTextColor(QColor(255,0,0));
            table_item->setBackgroundColor(QColor(0,0,0));
        }
        if(query.value(3).toInt()>=5)
        {
            table_item->setTextColor(QColor(0,255,0));
            table_item->setBackgroundColor(QColor(142,142,142));
        }



/**解释**/
//        table_item = new QTableWidgetItem(query.value(2).toString());
//        ui->tableWidget_word_list->setItem(row_count,2,table_item);
//        table_item->setBackgroundColor(QColor(110,185,50));
//        table_item->setTextColor(QColor(255,255,255));
//        if(query.value(3).toInt()<=0)
//        {
//            table_item->setTextColor(QColor(255,0,0));
//            table_item->setBackgroundColor(QColor(0,0,0));
//        }
//        if(query.value(3).toInt()>=5)
//        {
//            table_item->setTextColor(QColor(0,255,0));
//            table_item->setBackgroundColor(QColor(142,142,142));
//        }


    }
}

void MainWindow::reload_wordListFroSample()
{
    ui->listWidget_word_list->clear();
    QListWidgetItem * listItem;
    QSqlQuery query;
    query.exec("select w_word from words order by w_id");
    while(query.next())
    {
        listItem = new QListWidgetItem(ui->listWidget_word_list);
        listItem->setText(query.value(0).toString());
    }
}

void MainWindow::on_tableWidget_word_list_clicked(const QModelIndex &index)
{
    QTableWidgetItem * cur_item = ui->tableWidget_word_list->currentItem();
//    qDebug()<<ui->tableWidget_word_list->item(cur_item->row(),1)->text();

    QSqlQuery query;
    QTableWidgetItem * table_item;
    query.exec(QString("select * from words where w_word='%1'")
               .arg(ui->tableWidget_word_list->item(cur_item->row(),1)->text()));
    query.first();
    ui->label_word->setText(ui->tableWidget_word_list->item(cur_item->row(),1)->text());
    ui->label_mem_time->setText("记忆次数:"+ui->tableWidget_word_list->item(cur_item->row(),0)->text());
    ui->label_explain->setText(query.value(2).toString());
    QSqlQuery query2;
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
        if(query.value(5).toString()=="")
            listItem->setText("    解释： "+query.value(3).toString());
        else
            listItem->setText("    解释： "+query.value(3).toString()+"    创建时间"+query.value(5).toString());
    }

}

void MainWindow::on_pushButton_remeber_clicked()
{
    QSqlQuery query;
    query.exec(QString("select w_memory_time,w_id from words where w_word='%1'").arg(ui->label_word->text()));
    query.first();
    int times = query.value(0).toInt();
    times++;
//    qDebug()<<times;
    QSqlQuery query2;
    query2.exec(QString("UPDATE words SET w_memory_time = %1 WHERE w_word = '%2' ")
                .arg(QString::number(times))
                .arg(ui->label_word->text()));
//    qDebug()<<query2.lastError();
    QDateTime current_date_time = QDateTime::currentDateTime();
    QString current_date = current_date_time.toString("yyyy-MM-dd hh:mm:ss");
    query2.exec(QString("insert into rembered (w_id,time,rembered) values ('%1','%2',1)")
                .arg(query.value(1).toString())
                .arg(current_date));
//    qDebug()<<query2.lastError();
    ui->label_mem_time->setText("记忆次数:"+QString::number(times));
    reload_wordlist();
}

void MainWindow::on_pushButton_addNewWord_clicked()
{
    QDateTime current_date_time = QDateTime::currentDateTime();
    QString current_date = current_date_time.toString("yyyy-MM-dd hh:mm:ss");
    qDebug()<<current_date;
    if(ui->lineEdit_add_new_word->text() == "")
    {
        QMessageBox::critical(NULL,"添加错误","至少输入一个单词吧");
        return;
    }
    QSqlQuery query;
    bool result = query.exec(QString("INSERT INTO words (w_word,w_explain,w_create_time) VALUES ('%1', '%2', '%3')")
                           .arg(ui->lineEdit_add_new_word->text())
                           .arg(ui->lineEdit_add_new_explain->text())
                           .arg(current_date));
    qDebug()<<result;
    if(!result)
    {
       QMessageBox::critical(NULL,"添加错误","添加错误\n"+query.lastError().text());
       return;
    }
    QMessageBox::information(NULL,"添加成功","添加单词成功");
//        qDebug()<<query.lastError();
    reload_wordlist();
    reload_wordListFroSample();
}

void MainWindow::on_listWidget_word_list_clicked(const QModelIndex &index)
{
    reload_listWidget_sample_list();
}

void MainWindow::reload_listWidget_sample_list()
{
    QSqlQuery query;
    query.exec(QString("select * from word_sample where w_word='%1'").arg(ui->listWidget_word_list->currentItem()->text()));
    QListWidgetItem * listItem;
//    qDebug()<<query.lastError();
    ui->listWidget_sample_list->clear();
    while(query.next())
    {
//        qDebug()<<query.value(2).toString();
        listItem = new QListWidgetItem(ui->listWidget_sample_list);
        listItem->setText(query.value(2).toString());

        listItem = new QListWidgetItem(ui->listWidget_sample_list);
        listItem->setText("    解释： "+query.value(3).toString());
    }
}

void MainWindow::on_pushButton_add_new_sample_clicked()
{
    if(ui->lineEdit_add_new_sample->text()=="")
    {
        QMessageBox::critical(NULL,"添加例句错误","至少输入一条例句啊！");
        return;
    }

    if(ui->listWidget_word_list->currentItem() == NULL)
    {
        QMessageBox::critical(NULL,"添加例句错误","至少选择一个单词，亲！");
        return;
    }
    QDateTime current_date_time = QDateTime::currentDateTime();
    QString current_date = current_date_time.toString("yyyy-MM-dd hh:mm:ss");
//    qDebug()<<current_date;
    QSqlQuery query;
    query.exec(QString("select w_id from words where w_word='%1'")
               .arg(ui->listWidget_word_list->currentItem()->text()));
    query.first();
    QString word_id = query.value(0).toString();

    QString sample = ui->lineEdit_add_new_sample->text();
    QString explain = ui->lineEdit_add_new_sample_explain->text();
    sample = sample.replace("'","’");
    explain = explain.replace("'","’");
    qDebug()<<sample;
    bool result = query.exec(QString("INSERT INTO sample (w_id,sentences,explain,s_create_time) VALUES ('%1', '%2', '%3', '%4')")
                           .arg(word_id)
                           .arg(sample)
                           .arg(explain)
                           .arg(current_date));
    qDebug()<<result;
    if(!result)
       QMessageBox::critical(NULL,"添加错误","添加错误\n"+query.lastError().text());
    reload_listWidget_sample_list();
    reload_wordlist();
}
