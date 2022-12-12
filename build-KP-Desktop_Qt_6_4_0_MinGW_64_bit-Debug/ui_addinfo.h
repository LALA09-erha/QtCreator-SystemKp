/********************************************************************************
** Form generated from reading UI file 'addinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDINFO_H
#define UI_ADDINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddInfo
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *add;
    QPushButton *cancel;
    QLabel *index;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *info;
    QComboBox *opsilabel;
    QLabel *label_4;

    void setupUi(QDialog *AddInfo)
    {
        if (AddInfo->objectName().isEmpty())
            AddInfo->setObjectName("AddInfo");
        AddInfo->resize(400, 300);
        AddInfo->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);background-color: rgb(85, 85, 255);"));
        layoutWidget = new QWidget(AddInfo);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(300, 40, 85, 67));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        add = new QPushButton(layoutWidget);
        add->setObjectName("add");
        add->setCheckable(false);

        verticalLayout_3->addWidget(add);

        cancel = new QPushButton(layoutWidget);
        cancel->setObjectName("cancel");

        verticalLayout_3->addWidget(cancel);

        index = new QLabel(AddInfo);
        index->setObjectName("index");
        index->setGeometry(QRect(120, 260, 63, 20));
        layoutWidget_2 = new QWidget(AddInfo);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(10, 40, 281, 211));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(layoutWidget_2);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(30);
        verticalLayout_2->setObjectName("verticalLayout_2");
        info = new QLineEdit(layoutWidget_2);
        info->setObjectName("info");
        info->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(info);

        opsilabel = new QComboBox(layoutWidget_2);
        opsilabel->setObjectName("opsilabel");
        opsilabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(opsilabel);


        horizontalLayout->addLayout(verticalLayout_2);

        label_4 = new QLabel(AddInfo);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(160, 10, 111, 20));
        QFont font;
        font.setPointSize(14);
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);
#if QT_CONFIG(shortcut)
        label->setBuddy(info);
#endif // QT_CONFIG(shortcut)

        retranslateUi(AddInfo);

        QMetaObject::connectSlotsByName(AddInfo);
    } // setupUi

    void retranslateUi(QDialog *AddInfo)
    {
        AddInfo->setWindowTitle(QCoreApplication::translate("AddInfo", "Add Info", nullptr));
        add->setText(QCoreApplication::translate("AddInfo", "Add", nullptr));
        cancel->setText(QCoreApplication::translate("AddInfo", "Cancel", nullptr));
        index->setText(QString());
        label->setText(QCoreApplication::translate("AddInfo", "Info", nullptr));
        label_2->setText(QCoreApplication::translate("AddInfo", "Label", nullptr));
        info->setPlaceholderText(QCoreApplication::translate("AddInfo", "Masukkan Info", nullptr));
        label_4->setText(QCoreApplication::translate("AddInfo", "Add Info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddInfo: public Ui_AddInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDINFO_H
