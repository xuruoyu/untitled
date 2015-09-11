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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
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
    QListWidget *listWidget_sample;
    QGridLayout *gridLayout_4;
    QLabel *label_word;
    QLabel *label_explain;
    QLabel *label_mem_time;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_remeber;
    QPushButton *pushButton_refresh;
    QLabel *label_4;
    QTableWidget *tableWidget_word_list;
    QWidget *tab_2;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_add_new_explain;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_add_new_word;
    QPushButton *pushButton_addNewWord;
    QSpacerItem *verticalSpacer;
    QWidget *tab_3;
    QGridLayout *gridLayout_6;
    QLabel *label_5;
    QLineEdit *lineEdit_add_new_sample;
    QPushButton *pushButton_add_new_sample;
    QListWidget *listWidget_word_list;
    QLineEdit *lineEdit_add_new_sample_explain;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QListWidget *listWidget_sample_list;

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

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        pushButton_remeber = new QPushButton(word_list);
        pushButton_remeber->setObjectName(QStringLiteral("pushButton_remeber"));
        pushButton_remeber->setMinimumSize(QSize(180, 70));

        gridLayout_3->addWidget(pushButton_remeber, 0, 0, 1, 1);

        pushButton_refresh = new QPushButton(word_list);
        pushButton_refresh->setObjectName(QStringLiteral("pushButton_refresh"));
        pushButton_refresh->setMinimumSize(QSize(180, 70));

        gridLayout_3->addWidget(pushButton_refresh, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 6, 1, 1, 1);

        label_4 = new QLabel(word_list);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 2, 1, 1, 1);

        tableWidget_word_list = new QTableWidget(word_list);
        if (tableWidget_word_list->columnCount() < 2)
            tableWidget_word_list->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_word_list->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QFont font;
        font.setPointSize(19);
        font.setBold(true);
        font.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        tableWidget_word_list->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget_word_list->setObjectName(QStringLiteral("tableWidget_word_list"));

        gridLayout_2->addWidget(tableWidget_word_list, 2, 0, 5, 1);

        tabWidget->addTab(word_list, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_5 = new QGridLayout(tab_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_add_new_explain = new QLineEdit(tab_2);
        lineEdit_add_new_explain->setObjectName(QStringLiteral("lineEdit_add_new_explain"));

        horizontalLayout_3->addWidget(lineEdit_add_new_explain);


        gridLayout_5->addLayout(horizontalLayout_3, 3, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_add_new_word = new QLineEdit(tab_2);
        lineEdit_add_new_word->setObjectName(QStringLiteral("lineEdit_add_new_word"));

        horizontalLayout_2->addWidget(lineEdit_add_new_word);


        gridLayout_5->addLayout(horizontalLayout_2, 2, 1, 1, 1);

        pushButton_addNewWord = new QPushButton(tab_2);
        pushButton_addNewWord->setObjectName(QStringLiteral("pushButton_addNewWord"));
        pushButton_addNewWord->setMinimumSize(QSize(0, 70));

        gridLayout_5->addWidget(pushButton_addNewWord, 5, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 4, 1, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_6 = new QGridLayout(tab_3);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_6->addWidget(label_5, 2, 2, 1, 1);

        lineEdit_add_new_sample = new QLineEdit(tab_3);
        lineEdit_add_new_sample->setObjectName(QStringLiteral("lineEdit_add_new_sample"));

        gridLayout_6->addWidget(lineEdit_add_new_sample, 2, 3, 1, 1);

        pushButton_add_new_sample = new QPushButton(tab_3);
        pushButton_add_new_sample->setObjectName(QStringLiteral("pushButton_add_new_sample"));
        pushButton_add_new_sample->setMinimumSize(QSize(0, 70));

        gridLayout_6->addWidget(pushButton_add_new_sample, 4, 3, 1, 1);

        listWidget_word_list = new QListWidget(tab_3);
        listWidget_word_list->setObjectName(QStringLiteral("listWidget_word_list"));

        gridLayout_6->addWidget(listWidget_word_list, 1, 0, 4, 1);

        lineEdit_add_new_sample_explain = new QLineEdit(tab_3);
        lineEdit_add_new_sample_explain->setObjectName(QStringLiteral("lineEdit_add_new_sample_explain"));

        gridLayout_6->addWidget(lineEdit_add_new_sample_explain, 3, 3, 1, 1);

        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_6->addWidget(label_6, 3, 2, 1, 1);

        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_6->addWidget(label_7, 0, 0, 1, 1);

        label_8 = new QLabel(tab_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_6->addWidget(label_8, 0, 2, 1, 2);

        listWidget_sample_list = new QListWidget(tab_3);
        listWidget_sample_list->setObjectName(QStringLiteral("listWidget_sample_list"));

        gridLayout_6->addWidget(listWidget_sample_list, 1, 2, 1, 2);

        tabWidget->addTab(tab_3, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\277\253\345\216\273\350\203\214\345\215\225\350\257\215!!!", 0));
        label->setText(QApplication::translate("MainWindow", "\346\220\234\347\264\242:", 0));
        label_word->setText(QString());
        label_explain->setText(QString());
        label_mem_time->setText(QString());
        pushButton_remeber->setText(QApplication::translate("MainWindow", "\350\256\260\344\275\217\344\272\206", 0));
        pushButton_refresh->setText(QApplication::translate("MainWindow", "\346\262\241\350\256\260\344\275\217", 0));
        label_4->setText(QApplication::translate("MainWindow", "\344\276\213\345\217\245\357\274\232", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_word_list->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\350\256\260\345\277\206\346\254\241\346\225\260", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_word_list->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\345\215\225\350\257\215", 0));
        tabWidget->setTabText(tabWidget->indexOf(word_list), QApplication::translate("MainWindow", "\345\215\225\350\257\215\345\210\227\350\241\250", 0));
        label_3->setText(QApplication::translate("MainWindow", "\350\247\243\351\207\212:", 0));
        label_2->setText(QApplication::translate("MainWindow", "\345\215\225\350\257\215:", 0));
        pushButton_addNewWord->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\346\267\273\345\212\240\345\215\225\350\257\215", 0));
        label_5->setText(QApplication::translate("MainWindow", "\344\276\213\345\217\245\357\274\232", 0));
        pushButton_add_new_sample->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240", 0));
        label_6->setText(QApplication::translate("MainWindow", "\350\247\243\351\207\212\357\274\232", 0));
        label_7->setText(QApplication::translate("MainWindow", "\345\215\225\350\257\215\345\210\227\350\241\250", 0));
        label_8->setText(QApplication::translate("MainWindow", "\344\276\213\345\217\245", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\344\276\213\345\217\245", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
