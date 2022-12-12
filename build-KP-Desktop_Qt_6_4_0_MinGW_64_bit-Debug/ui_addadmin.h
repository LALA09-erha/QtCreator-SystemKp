/********************************************************************************
** Form generated from reading UI file 'addadmin.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDADMIN_H
#define UI_ADDADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddAdmin
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *username;
    QLineEdit *password;
    QLabel *label_5;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_6;
    QPushButton *add_admin;
    QPushButton *cancel_2;

    void setupUi(QDialog *AddAdmin)
    {
        if (AddAdmin->objectName().isEmpty())
            AddAdmin->setObjectName("AddAdmin");
        AddAdmin->resize(400, 300);
        AddAdmin->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);\n"
"background-color: rgb(85, 85, 255);"));
        layoutWidget = new QWidget(AddAdmin);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 40, 281, 211));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout_4->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        verticalLayout_4->addWidget(label_4);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(30);
        verticalLayout_5->setObjectName("verticalLayout_5");
        username = new QLineEdit(layoutWidget);
        username->setObjectName("username");
        username->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));

        verticalLayout_5->addWidget(username);

        password = new QLineEdit(layoutWidget);
        password->setObjectName("password");
        password->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));
        password->setEchoMode(QLineEdit::Password);

        verticalLayout_5->addWidget(password);


        horizontalLayout_2->addLayout(verticalLayout_5);

        label_5 = new QLabel(AddAdmin);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(150, 10, 121, 20));
        QFont font;
        font.setPointSize(14);
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);
        layoutWidget_2 = new QWidget(AddAdmin);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(300, 40, 85, 67));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        add_admin = new QPushButton(layoutWidget_2);
        add_admin->setObjectName("add_admin");
        add_admin->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));
        add_admin->setCheckable(false);

        verticalLayout_6->addWidget(add_admin);

        cancel_2 = new QPushButton(layoutWidget_2);
        cancel_2->setObjectName("cancel_2");
        cancel_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));

        verticalLayout_6->addWidget(cancel_2);

#if QT_CONFIG(shortcut)
#endif // QT_CONFIG(shortcut)

        retranslateUi(AddAdmin);

        QMetaObject::connectSlotsByName(AddAdmin);
    } // setupUi

    void retranslateUi(QDialog *AddAdmin)
    {
        AddAdmin->setWindowTitle(QCoreApplication::translate("AddAdmin", "Add Admin", nullptr));
        label_3->setText(QCoreApplication::translate("AddAdmin", "Username", nullptr));
        label_4->setText(QCoreApplication::translate("AddAdmin", "Password", nullptr));
        username->setPlaceholderText(QCoreApplication::translate("AddAdmin", "Masukkan Username", nullptr));
        password->setPlaceholderText(QCoreApplication::translate("AddAdmin", "Masukkan Password", nullptr));
        label_5->setText(QCoreApplication::translate("AddAdmin", "Add Admin", nullptr));
        add_admin->setText(QCoreApplication::translate("AddAdmin", "Add", nullptr));
        cancel_2->setText(QCoreApplication::translate("AddAdmin", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddAdmin: public Ui_AddAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDADMIN_H
