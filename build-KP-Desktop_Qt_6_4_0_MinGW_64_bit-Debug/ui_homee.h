/********************************************************************************
** Form generated from reading UI file 'homee.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEE_H
#define UI_HOMEE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Homee
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *awal;
    QWidget *main;
    QLabel *label;
    QPushButton *pushButton;
    QWidget *info;
    QWidget *alur;
    QWidget *profile;
    QWidget *Info;
    QWidget *admin;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Homee)
    {
        if (Homee->objectName().isEmpty())
            Homee->setObjectName("Homee");
        Homee->resize(800, 600);
        centralwidget = new QWidget(Homee);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        awal = new QTabWidget(centralwidget);
        awal->setObjectName("awal");
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        awal->setFont(font);
        awal->setTabShape(QTabWidget::Rounded);
        awal->setIconSize(QSize(25, 25));
        awal->setElideMode(Qt::ElideLeft);
        main = new QWidget();
        main->setObjectName("main");
        main->setFont(font);
        label = new QLabel(main);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 0, 200, 100));
        label->setMaximumSize(QSize(200, 100));
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(main);
        pushButton->setObjectName("pushButton");
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(150, 120, 200, 181));
        pushButton->setMaximumSize(QSize(200, 200));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(false);
        pushButton->setFont(font1);
        pushButton->setIconSize(QSize(50, 50));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../SteamLibrary/steamapps/Qt/db/home-house-main-page-building-address-location-1-2618.png"), QSize(), QIcon::Normal, QIcon::Off);
        awal->addTab(main, icon, QString());
        info = new QWidget();
        info->setObjectName("info");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../../../SteamLibrary/steamapps/Qt/db/30526515309-3090392_download-megaphone-flat-icon-png.png"), QSize(), QIcon::Normal, QIcon::Off);
        awal->addTab(info, icon1, QString());
        alur = new QWidget();
        alur->setObjectName("alur");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../../../SteamLibrary/steamapps/Qt/db/762722.png"), QSize(), QIcon::Normal, QIcon::Off);
        awal->addTab(alur, icon2, QString());
        profile = new QWidget();
        profile->setObjectName("profile");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../../../SteamLibrary/steamapps/Qt/db/pngtree-vector-edit-profile-icon-png-image_760869.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        awal->addTab(profile, icon3, QString());
        Info = new QWidget();
        Info->setObjectName("Info");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../../../../SteamLibrary/steamapps/Qt/db/information.png"), QSize(), QIcon::Normal, QIcon::Off);
        awal->addTab(Info, icon4, QString());
        admin = new QWidget();
        admin->setObjectName("admin");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../../../../SteamLibrary/steamapps/Qt/db/download.png"), QSize(), QIcon::Normal, QIcon::Off);
        awal->addTab(admin, icon5, QString());

        gridLayout->addWidget(awal, 0, 0, 1, 1);

        Homee->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Homee);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Homee->setMenuBar(menubar);
        statusbar = new QStatusBar(Homee);
        statusbar->setObjectName("statusbar");
        Homee->setStatusBar(statusbar);

        retranslateUi(Homee);

        awal->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Homee);
    } // setupUi

    void retranslateUi(QMainWindow *Homee)
    {
        Homee->setWindowTitle(QCoreApplication::translate("Homee", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("Homee", "Sistem Informasi KP", nullptr));
        pushButton->setText(QCoreApplication::translate("Homee", "CommandLinkButton", nullptr));
        awal->setTabText(awal->indexOf(main), QCoreApplication::translate("Homee", "Main Menu", nullptr));
        awal->setTabText(awal->indexOf(info), QCoreApplication::translate("Homee", "Pengumuman KP", nullptr));
        awal->setTabText(awal->indexOf(alur), QCoreApplication::translate("Homee", "Alur KP", nullptr));
        awal->setTabText(awal->indexOf(profile), QCoreApplication::translate("Homee", "Profile", nullptr));
        awal->setTabText(awal->indexOf(Info), QCoreApplication::translate("Homee", "Info", nullptr));
        awal->setTabText(awal->indexOf(admin), QCoreApplication::translate("Homee", "Admin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Homee: public Ui_Homee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEE_H
