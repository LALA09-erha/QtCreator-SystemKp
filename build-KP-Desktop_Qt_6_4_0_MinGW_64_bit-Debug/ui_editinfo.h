/********************************************************************************
** Form generated from reading UI file 'editinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITINFO_H
#define UI_EDITINFO_H

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

class Ui_EditInfo
{
public:
    QLabel *label_4;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *info;
    QComboBox *opsilabel;
    QLabel *index;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QPushButton *update;
    QPushButton *cancel;

    void setupUi(QDialog *EditInfo)
    {
        if (EditInfo->objectName().isEmpty())
            EditInfo->setObjectName("EditInfo");
        EditInfo->resize(400, 293);
        EditInfo->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 255);\n"
"color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));
        label_4 = new QLabel(EditInfo);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(160, 10, 111, 20));
        QFont font;
        font.setPointSize(14);
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_4->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(EditInfo);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 40, 281, 211));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(30);
        verticalLayout_2->setObjectName("verticalLayout_2");
        info = new QLineEdit(layoutWidget);
        info->setObjectName("info");
        info->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(info);

        opsilabel = new QComboBox(layoutWidget);
        opsilabel->setObjectName("opsilabel");
        opsilabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(opsilabel);


        horizontalLayout->addLayout(verticalLayout_2);

        index = new QLabel(EditInfo);
        index->setObjectName("index");
        index->setGeometry(QRect(120, 260, 63, 20));
        layoutWidget1 = new QWidget(EditInfo);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(300, 40, 85, 67));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        update = new QPushButton(layoutWidget1);
        update->setObjectName("update");
        update->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        update->setCheckable(false);

        verticalLayout_3->addWidget(update);

        cancel = new QPushButton(layoutWidget1);
        cancel->setObjectName("cancel");
        cancel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(cancel);

#if QT_CONFIG(shortcut)
        label->setBuddy(info);
#endif // QT_CONFIG(shortcut)

        retranslateUi(EditInfo);

        QMetaObject::connectSlotsByName(EditInfo);
    } // setupUi

    void retranslateUi(QDialog *EditInfo)
    {
        EditInfo->setWindowTitle(QCoreApplication::translate("EditInfo", "Edit Info", nullptr));
        label_4->setText(QCoreApplication::translate("EditInfo", "Edit Info", nullptr));
        label->setText(QCoreApplication::translate("EditInfo", "Info", nullptr));
        label_2->setText(QCoreApplication::translate("EditInfo", "Label", nullptr));
        info->setPlaceholderText(QCoreApplication::translate("EditInfo", "Masukkan Info", nullptr));
        index->setText(QString());
        update->setText(QCoreApplication::translate("EditInfo", "Update", nullptr));
        cancel->setText(QCoreApplication::translate("EditInfo", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditInfo: public Ui_EditInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITINFO_H
