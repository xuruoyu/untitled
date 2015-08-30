/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *word_list;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_add_new_word;
    QPushButton *pushButton_refresh;
    QListWidget *listWidget_sample;
    QGridLayout *gridLayout_4;
    QLabel *label_word;
    QLabel *label_explain;
    QLabel *label_mem_time;
    QTableWidget *tableWidget_word_list;
    QWidget *tab_2;
    QWidget *tab_3;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        word_list = new QWidget();
        word_list->setObjectName(QStringLiteral("word_list"));
        gridLayout_2 = new QGridLayout(word_list);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(word_list);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(word_list);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        pushButton_add_new_word = new QPushButton(word_list);
        pushButton_add_new_word->setObjectName(QStringLiteral("pushButton_add_new_word"));

        gridLayout_3->addWidget(pushButton_add_new_word, 0, 0, 1, 1);

        pushButton_refresh = new QPushButton(word_list);
        pushButton_refresh->setObjectName(QStringLiteral("pushButton_refresh"));

        gridLayout_3->addWidget(pushButton_refresh, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 7, 0, 2, 2);

        listWidget_sample = new QListWidget(word_list);
        listWidget_sample->setObjectName(QStringLiteral("listWidget_sample"));

        gridLayout_2->addWidget(listWidget_sample, 4, 1, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_word = new QLabel(word_list);
        label_word->setObjectName(QStringLiteral("label_word"));

        gridLayout_4->addWidget(label_word, 0, 0, 1, 1);

        label_explain = new QLabel(word_list);
        label_explain->setObjectName(QStringLiteral("label_explain"));

        gridLayout_4->addWidget(label_explain, 1, 0, 1, 2);

        label_mem_time = new QLabel(word_list);
        label_mem_time->setObjectName(QStringLiteral("label_mem_time"));

        gridLayout_4->addWidget(label_mem_time, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout_4, 5, 1, 1, 1);

        tableWidget_word_list = new QTableWidget(word_list);
        if (tableWidget_word_list->columnCount() < 3)
            tableWidget_word_list->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_word_list->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QFont font;
        font.setPointSize(19);
        font.setBold(true);
        font.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        tableWidget_word_list->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_word_list->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget_word_list->rowCount() < 3)
            tableWidget_word_list->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_word_list->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_word_list->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_word_list->setVerticalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_word_list->setItem(0, 0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_word_list->setItem(0, 1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_word_list->setItem(0, 2, __qtablewidgetitem8);
        tableWidget_word_list->setObjectName(QStringLiteral("tableWidget_word_list"));

        gridLayout_2->addWidget(tableWidget_word_list, 4, 0, 2, 1);

        tabWidget->addTab(word_list, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\277\253\345\216\273\350\203\214\345\215\225\350\257\215!!!", 0));
        label->setText(QApplication::translate("MainWindow", "\346\220\234\347\264\242:", 0));
        pushButton_add_new_word->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\345\215\225\350\257\215", 0));
        pushButton_refresh->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260", 0));
        label_word->setText(QString());
        label_explain->setText(QString());
        label_mem_time->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget_word_list->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\350\256\260\345\277\206\346\254\241\346\225\260", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_word_list->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\345\215\225\350\257\215", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_word_list->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\350\247\243\351\207\212", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_word_list->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "1", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_word_list->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "2", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_word_list->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "3", 0));

        const bool __sortingEnabled = tableWidget_word_list->isSortingEnabled();
        tableWidget_word_list->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_word_list->item(0, 0);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "1", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_word_list->item(0, 1);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "\346\201\266\350\266\243\345\221\263\350\266\243\345\221\263\351\275\220\345\205\250", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_word_list->item(0, 2);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", " \351\230\277\346\222\222\346\211\223\347\256\227\346\211\223\347\256\227\347\232\204", 0));
        tableWidget_word_list->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(word_list), QApplication::translate("MainWindow", "\345\215\225\350\257\215\345\210\227\350\241\250", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\346\267\273\345\212\240\345\215\225\350\257\215", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\350\277\230\346\262\241\346\203\263\345\245\2752", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
