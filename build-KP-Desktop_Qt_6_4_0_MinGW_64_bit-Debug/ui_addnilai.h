/********************************************************************************
** Form generated from reading UI file 'addnilai.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNILAI_H
#define UI_ADDNILAI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddNilai
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *nim;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpinBox *nilai;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *AddNilai)
    {
        if (AddNilai->objectName().isEmpty())
            AddNilai->setObjectName("AddNilai");
        AddNilai->resize(400, 300);
        AddNilai->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(85, 85, 255);\n"
"border-color: rgb(255, 255, 255);"));
        horizontalLayout_3 = new QHBoxLayout(AddNilai);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(AddNilai);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(25);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        nim = new QLabel(AddNilai);
        nim->setObjectName("nim");
        nim->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));
        nim->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(nim);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(AddNilai);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(label_2);

        nilai = new QSpinBox(AddNilai);
        nilai->setObjectName("nilai");
        nilai->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);\n"
"border-right-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(nilai);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton = new QPushButton(AddNilai);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(AddNilai);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_3);


        retranslateUi(AddNilai);

        QMetaObject::connectSlotsByName(AddNilai);
    } // setupUi

    void retranslateUi(QDialog *AddNilai)
    {
        AddNilai->setWindowTitle(QCoreApplication::translate("AddNilai", "Insert Nilai", nullptr));
        label->setText(QCoreApplication::translate("AddNilai", "Insert Nilai", nullptr));
        nim->setText(QCoreApplication::translate("AddNilai", "Insert Nilai", nullptr));
        label_2->setText(QCoreApplication::translate("AddNilai", "Nilai", nullptr));
        pushButton->setText(QCoreApplication::translate("AddNilai", "Insert", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AddNilai", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddNilai: public Ui_AddNilai {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNILAI_H
