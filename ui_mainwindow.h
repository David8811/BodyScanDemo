/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon 12. Dec 13:25:52 2016
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *height_label_value;
    QLabel *head_label_value;
    QLabel *neck_label_value;
    QLabel *shoulders_label_value;
    QLabel *chest_label_value;
    QLabel *waist_label_value;
    QLabel *hips_label_value;
    QLabel *buttocks_label_value;
    QLabel *thigh_label_value;
    QLabel *calf_label_value;
    QListWidget *manualListBox;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *height_label;
    QLabel *head_label;
    QLabel *neck_label;
    QLabel *shoulders_label;
    QLabel *chest_label;
    QLabel *waist_label;
    QLabel *hips_label;
    QLabel *buttocks_label;
    QLabel *thig_label;
    QLabel *calf_label;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(405, 329);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(405, 329));
        MainWindow->setMaximumSize(QSize(405, 329));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(14, 250, 381, 23));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 10, 75, 231));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        height_label_value = new QLabel(layoutWidget);
        height_label_value->setObjectName(QString::fromUtf8("height_label_value"));

        verticalLayout_2->addWidget(height_label_value);

        head_label_value = new QLabel(layoutWidget);
        head_label_value->setObjectName(QString::fromUtf8("head_label_value"));

        verticalLayout_2->addWidget(head_label_value);

        neck_label_value = new QLabel(layoutWidget);
        neck_label_value->setObjectName(QString::fromUtf8("neck_label_value"));

        verticalLayout_2->addWidget(neck_label_value);

        shoulders_label_value = new QLabel(layoutWidget);
        shoulders_label_value->setObjectName(QString::fromUtf8("shoulders_label_value"));

        verticalLayout_2->addWidget(shoulders_label_value);

        chest_label_value = new QLabel(layoutWidget);
        chest_label_value->setObjectName(QString::fromUtf8("chest_label_value"));

        verticalLayout_2->addWidget(chest_label_value);

        waist_label_value = new QLabel(layoutWidget);
        waist_label_value->setObjectName(QString::fromUtf8("waist_label_value"));

        verticalLayout_2->addWidget(waist_label_value);

        hips_label_value = new QLabel(layoutWidget);
        hips_label_value->setObjectName(QString::fromUtf8("hips_label_value"));

        verticalLayout_2->addWidget(hips_label_value);

        buttocks_label_value = new QLabel(layoutWidget);
        buttocks_label_value->setObjectName(QString::fromUtf8("buttocks_label_value"));

        verticalLayout_2->addWidget(buttocks_label_value);

        thigh_label_value = new QLabel(layoutWidget);
        thigh_label_value->setObjectName(QString::fromUtf8("thigh_label_value"));

        verticalLayout_2->addWidget(thigh_label_value);

        calf_label_value = new QLabel(layoutWidget);
        calf_label_value->setObjectName(QString::fromUtf8("calf_label_value"));

        verticalLayout_2->addWidget(calf_label_value);

        manualListBox = new QListWidget(centralWidget);
        manualListBox->setObjectName(QString::fromUtf8("manualListBox"));
        manualListBox->setGeometry(QRect(180, 10, 161, 231));
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 10, 66, 231));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        height_label = new QLabel(layoutWidget1);
        height_label->setObjectName(QString::fromUtf8("height_label"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        height_label->setFont(font);

        verticalLayout->addWidget(height_label);

        head_label = new QLabel(layoutWidget1);
        head_label->setObjectName(QString::fromUtf8("head_label"));
        head_label->setFont(font);

        verticalLayout->addWidget(head_label);

        neck_label = new QLabel(layoutWidget1);
        neck_label->setObjectName(QString::fromUtf8("neck_label"));
        neck_label->setFont(font);

        verticalLayout->addWidget(neck_label);

        shoulders_label = new QLabel(layoutWidget1);
        shoulders_label->setObjectName(QString::fromUtf8("shoulders_label"));
        shoulders_label->setFont(font);

        verticalLayout->addWidget(shoulders_label);

        chest_label = new QLabel(layoutWidget1);
        chest_label->setObjectName(QString::fromUtf8("chest_label"));
        chest_label->setFont(font);

        verticalLayout->addWidget(chest_label);

        waist_label = new QLabel(layoutWidget1);
        waist_label->setObjectName(QString::fromUtf8("waist_label"));
        waist_label->setFont(font);

        verticalLayout->addWidget(waist_label);

        hips_label = new QLabel(layoutWidget1);
        hips_label->setObjectName(QString::fromUtf8("hips_label"));
        hips_label->setFont(font);

        verticalLayout->addWidget(hips_label);

        buttocks_label = new QLabel(layoutWidget1);
        buttocks_label->setObjectName(QString::fromUtf8("buttocks_label"));
        buttocks_label->setFont(font);

        verticalLayout->addWidget(buttocks_label);

        thig_label = new QLabel(layoutWidget1);
        thig_label->setObjectName(QString::fromUtf8("thig_label"));
        thig_label->setFont(font);

        verticalLayout->addWidget(thig_label);

        calf_label = new QLabel(layoutWidget1);
        calf_label->setObjectName(QString::fromUtf8("calf_label"));
        calf_label->setFont(font);

        verticalLayout->addWidget(calf_label);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(340, 40, 61, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 405, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "BodyScan Demo C++", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "Load Model", 0, QApplication::UnicodeUTF8));
        height_label_value->setText(QString());
        head_label_value->setText(QString());
        neck_label_value->setText(QString());
        shoulders_label_value->setText(QString());
        chest_label_value->setText(QString());
        waist_label_value->setText(QString());
        hips_label_value->setText(QString());
        buttocks_label_value->setText(QString());
        thigh_label_value->setText(QString());
        calf_label_value->setText(QString());
        height_label->setText(QApplication::translate("MainWindow", "Height", 0, QApplication::UnicodeUTF8));
        head_label->setText(QApplication::translate("MainWindow", "Head", 0, QApplication::UnicodeUTF8));
        neck_label->setText(QApplication::translate("MainWindow", "Neck", 0, QApplication::UnicodeUTF8));
        shoulders_label->setText(QApplication::translate("MainWindow", "Shoulders", 0, QApplication::UnicodeUTF8));
        chest_label->setText(QApplication::translate("MainWindow", "Chest", 0, QApplication::UnicodeUTF8));
        waist_label->setText(QApplication::translate("MainWindow", "Waist", 0, QApplication::UnicodeUTF8));
        hips_label->setText(QApplication::translate("MainWindow", "Hips", 0, QApplication::UnicodeUTF8));
        buttocks_label->setText(QApplication::translate("MainWindow", "Buttocks", 0, QApplication::UnicodeUTF8));
        thig_label->setText(QApplication::translate("MainWindow", "Thigh", 0, QApplication::UnicodeUTF8));
        calf_label->setText(QApplication::translate("MainWindow", "Calf", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
