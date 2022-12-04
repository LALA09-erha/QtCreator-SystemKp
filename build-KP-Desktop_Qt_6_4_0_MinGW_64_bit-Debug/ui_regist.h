/********************************************************************************
** Form generated from reading UI file 'regist.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGIST_H
#define UI_REGIST_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Regist
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout;
    QLineEdit *username;
    QLineEdit *password;
    QPushButton *regist;
    QToolButton *toolButton;

    void setupUi(QDialog *Regist)
    {
        if (Regist->objectName().isEmpty())
            Regist->setObjectName("Regist");
        Regist->resize(463, 347);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../SteamLibrary/steamapps/Qt/db/login_2019_logo_black.png"), QSize(), QIcon::Normal, QIcon::Off);
        Regist->setWindowIcon(icon);
        layoutWidget = new QWidget(Regist);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, -10, 421, 301));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setMaximumSize(QSize(16777215, 69));
        QFont font;
        font.setPointSize(30);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(28);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(16777215, 100));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setMaximumSize(QSize(16777215, 100));

        verticalLayout_2->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(30);
        verticalLayout->setObjectName("verticalLayout");
        username = new QLineEdit(layoutWidget);
        username->setObjectName("username");

        verticalLayout->addWidget(username);

        password = new QLineEdit(layoutWidget);
        password->setObjectName("password");
        password->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(password);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        regist = new QPushButton(layoutWidget);
        regist->setObjectName("regist");

        verticalLayout_3->addWidget(regist);

        toolButton = new QToolButton(Regist);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(200, 300, 71, 27));
        toolButton->setPopupMode(QToolButton::DelayedPopup);
        toolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton->setAutoRaise(false);
        toolButton->setArrowType(Qt::LeftArrow);
#if QT_CONFIG(shortcut)
        label_2->setBuddy(username);
        label_3->setBuddy(password);
#endif // QT_CONFIG(shortcut)

        retranslateUi(Regist);

        QMetaObject::connectSlotsByName(Regist);
    } // setupUi

    void retranslateUi(QDialog *Regist)
    {
        Regist->setWindowTitle(QCoreApplication::translate("Regist", "Register", nullptr));
        label->setText(QCoreApplication::translate("Regist", "Registrasi", nullptr));
        label_2->setText(QCoreApplication::translate("Regist", "Username", nullptr));
        label_3->setText(QCoreApplication::translate("Regist", "Password", nullptr));
        username->setPlaceholderText(QCoreApplication::translate("Regist", "Masukkan NIM Anda", nullptr));
        password->setPlaceholderText(QCoreApplication::translate("Regist", "Masukkan Password Anda", nullptr));
        regist->setText(QCoreApplication::translate("Regist", "Registrasi", nullptr));
        toolButton->setText(QCoreApplication::translate("Regist", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Regist: public Ui_Regist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGIST_H
