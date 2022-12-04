/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Home
{
public:
    QGridLayout *gridLayout;
    QTabWidget *awal;
    QWidget *main;
    QLabel *id_user;
    QPushButton *tombolAwal;
    QLabel *pengumuman;
    QWidget *info;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QTableView *tview;
    QWidget *alur;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_7;
    QTableView *ttview;
    QWidget *profile;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_7;
    QLabel *profile_2;
    QLabel *informasi;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *username_user;
    QLineEdit *password_user;
    QLineEdit *nama_user;
    QLineEdit *alamat_user;
    QSpinBox *sks;
    QPushButton *save;
    QWidget *Info;
    QTableView *viewinfo;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QPushButton *refr;
    QSpacerItem *verticalSpacer;
    QWidget *admin;
    QTableView *viewadmin;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *addadmin;
    QPushButton *refradmin;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QDialog *Home)
    {
        if (Home->objectName().isEmpty())
            Home->setObjectName("Home");
        Home->resize(690, 558);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../SteamLibrary/steamapps/Qt/db/home-house-main-page-building-address-location-1-2618.png"), QSize(), QIcon::Normal, QIcon::Off);
        Home->setWindowIcon(icon);
        gridLayout = new QGridLayout(Home);
        gridLayout->setObjectName("gridLayout");
        awal = new QTabWidget(Home);
        awal->setObjectName("awal");
        awal->setMaximumSize(QSize(16777215, 16777215));
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
        id_user = new QLabel(main);
        id_user->setObjectName("id_user");
        id_user->setGeometry(QRect(240, 70, 200, 100));
        id_user->setMaximumSize(QSize(200, 100));
        id_user->setAlignment(Qt::AlignCenter);
        tombolAwal = new QPushButton(main);
        tombolAwal->setObjectName("tombolAwal");
        tombolAwal->setEnabled(true);
        tombolAwal->setGeometry(QRect(240, 160, 200, 181));
        tombolAwal->setMaximumSize(QSize(200, 200));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(false);
        tombolAwal->setFont(font1);
        tombolAwal->setIconSize(QSize(50, 50));
        pengumuman = new QLabel(main);
        pengumuman->setObjectName("pengumuman");
        pengumuman->setGeometry(QRect(130, 350, 421, 20));
        pengumuman->setAlignment(Qt::AlignCenter);
        awal->addTab(main, icon, QString());
        info = new QWidget();
        info->setObjectName("info");
        verticalLayout_8 = new QVBoxLayout(info);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_6 = new QLabel(info);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_6);

        tview = new QTableView(info);
        tview->setObjectName("tview");

        verticalLayout_4->addWidget(tview);


        verticalLayout_8->addLayout(verticalLayout_4);

        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../../../SteamLibrary/steamapps/Qt/db/30526515309-3090392_download-megaphone-flat-icon-png.png"), QSize(), QIcon::Normal, QIcon::Off);
        awal->addTab(info, icon1, QString());
        alur = new QWidget();
        alur->setObjectName("alur");
        horizontalLayout_2 = new QHBoxLayout(alur);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        label_7 = new QLabel(alur);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label_7);

        ttview = new QTableView(alur);
        ttview->setObjectName("ttview");

        verticalLayout_9->addWidget(ttview);


        horizontalLayout_2->addLayout(verticalLayout_9);

        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../../../SteamLibrary/steamapps/Qt/db/762722.png"), QSize(), QIcon::Normal, QIcon::Off);
        awal->addTab(alur, icon2, QString());
        profile = new QWidget();
        profile->setObjectName("profile");
        layoutWidget = new QWidget(profile);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(60, 0, 551, 485));
        verticalLayout_7 = new QVBoxLayout(layoutWidget);
        verticalLayout_7->setSpacing(5);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        profile_2 = new QLabel(layoutWidget);
        profile_2->setObjectName("profile_2");
        QFont font2;
        font2.setPointSize(25);
        font2.setBold(false);
        profile_2->setFont(font2);
        profile_2->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(profile_2);

        informasi = new QLabel(layoutWidget);
        informasi->setObjectName("informasi");
        informasi->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(informasi);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(5);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(-1, 0, -1, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setIndent(-1);

        verticalLayout_5->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setIndent(-1);

        verticalLayout_5->addWidget(label_3);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setIndent(-1);

        verticalLayout_5->addWidget(label);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setIndent(-1);

        verticalLayout_5->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setIndent(-1);

        verticalLayout_5->addWidget(label_5);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(5);
        verticalLayout_6->setObjectName("verticalLayout_6");
        username_user = new QLineEdit(layoutWidget);
        username_user->setObjectName("username_user");

        verticalLayout_6->addWidget(username_user);

        password_user = new QLineEdit(layoutWidget);
        password_user->setObjectName("password_user");
        password_user->setEchoMode(QLineEdit::Password);

        verticalLayout_6->addWidget(password_user);

        nama_user = new QLineEdit(layoutWidget);
        nama_user->setObjectName("nama_user");

        verticalLayout_6->addWidget(nama_user);

        alamat_user = new QLineEdit(layoutWidget);
        alamat_user->setObjectName("alamat_user");

        verticalLayout_6->addWidget(alamat_user);

        sks = new QSpinBox(layoutWidget);
        sks->setObjectName("sks");

        verticalLayout_6->addWidget(sks);


        horizontalLayout->addLayout(verticalLayout_6);


        verticalLayout_7->addLayout(horizontalLayout);

        save = new QPushButton(layoutWidget);
        save->setObjectName("save");

        verticalLayout_7->addWidget(save);

        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../../../SteamLibrary/steamapps/Qt/db/pngtree-vector-edit-profile-icon-png-image_760869.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        awal->addTab(profile, icon3, QString());
        Info = new QWidget();
        Info->setObjectName("Info");
        viewinfo = new QTableView(Info);
        viewinfo->setObjectName("viewinfo");
        viewinfo->setGeometry(QRect(0, 0, 561, 491));
        layoutWidget1 = new QWidget(Info);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(560, 0, 104, 153));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);

        refr = new QPushButton(layoutWidget1);
        refr->setObjectName("refr");

        verticalLayout->addWidget(refr);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addLayout(verticalLayout);

        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../../../../SteamLibrary/steamapps/Qt/db/information.png"), QSize(), QIcon::Normal, QIcon::Off);
        awal->addTab(Info, icon4, QString());
        admin = new QWidget();
        admin->setObjectName("admin");
        viewadmin = new QTableView(admin);
        viewadmin->setObjectName("viewadmin");
        viewadmin->setGeometry(QRect(0, 0, 561, 491));
        layoutWidget2 = new QWidget(admin);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(560, 0, 111, 128));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        addadmin = new QPushButton(layoutWidget2);
        addadmin->setObjectName("addadmin");
        addadmin->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_3->addWidget(addadmin);

        refradmin = new QPushButton(layoutWidget2);
        refradmin->setObjectName("refradmin");

        verticalLayout_3->addWidget(refradmin);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../../../../SteamLibrary/steamapps/Qt/db/download.png"), QSize(), QIcon::Normal, QIcon::Off);
        awal->addTab(admin, icon5, QString());

        gridLayout->addWidget(awal, 0, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label_2->setBuddy(username_user);
        label_3->setBuddy(password_user);
        label->setBuddy(nama_user);
        label_4->setBuddy(alamat_user);
        label_5->setBuddy(sks);
#endif // QT_CONFIG(shortcut)

        retranslateUi(Home);

        awal->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Home);
    } // setupUi

    void retranslateUi(QDialog *Home)
    {
        Home->setWindowTitle(QCoreApplication::translate("Home", "Home", nullptr));
        id_user->setText(QCoreApplication::translate("Home", "Sistem Informasi KP", nullptr));
        tombolAwal->setText(QCoreApplication::translate("Home", "CommandLinkButton", nullptr));
        pengumuman->setText(QCoreApplication::translate("Home", "TextLabel", nullptr));
        awal->setTabText(awal->indexOf(main), QCoreApplication::translate("Home", "Main Menu", nullptr));
        label_6->setText(QCoreApplication::translate("Home", "Informasi Terkait Syarat Pendaftaran Kp", nullptr));
        awal->setTabText(awal->indexOf(info), QCoreApplication::translate("Home", "Pengumuman KP", nullptr));
        label_7->setText(QCoreApplication::translate("Home", "Informasi Terkait Alur Pendaftaran KP", nullptr));
        awal->setTabText(awal->indexOf(alur), QCoreApplication::translate("Home", "Alur KP", nullptr));
        profile_2->setText(QCoreApplication::translate("Home", "PROFILE", nullptr));
        informasi->setText(QString());
        label_2->setText(QCoreApplication::translate("Home", "Username", nullptr));
        label_3->setText(QCoreApplication::translate("Home", "Password", nullptr));
        label->setText(QCoreApplication::translate("Home", "Nama", nullptr));
        label_4->setText(QCoreApplication::translate("Home", "Alamat", nullptr));
        label_5->setText(QCoreApplication::translate("Home", "Total SKS", nullptr));
        save->setText(QCoreApplication::translate("Home", "Save", nullptr));
        awal->setTabText(awal->indexOf(profile), QCoreApplication::translate("Home", "Profile", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Home", "Add Info", nullptr));
        refr->setText(QCoreApplication::translate("Home", "refresh", nullptr));
        awal->setTabText(awal->indexOf(Info), QCoreApplication::translate("Home", "Info", nullptr));
        addadmin->setText(QCoreApplication::translate("Home", "Add Admin", nullptr));
        refradmin->setText(QCoreApplication::translate("Home", "refresh", nullptr));
        awal->setTabText(awal->indexOf(admin), QCoreApplication::translate("Home", "Admin", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Home: public Ui_Home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
