/********************************************************************************
** Form generated from reading UI file 'uploadlink.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPLOADLINK_H
#define UI_UPLOADLINK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UploadLink
{
public:
    QPushButton *cancel;
    QPushButton *upload;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *linkedit;

    void setupUi(QDialog *UploadLink)
    {
        if (UploadLink->objectName().isEmpty())
            UploadLink->setObjectName("UploadLink");
        UploadLink->resize(374, 278);
        cancel = new QPushButton(UploadLink);
        cancel->setObjectName("cancel");
        cancel->setGeometry(QRect(278, 49, 83, 29));
        upload = new QPushButton(UploadLink);
        upload->setObjectName("upload");
        upload->setGeometry(QRect(278, 13, 83, 29));
        layoutWidget = new QWidget(UploadLink);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(12, 12, 279, 254));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);


        verticalLayout_2->addLayout(verticalLayout);

        linkedit = new QLineEdit(layoutWidget);
        linkedit->setObjectName("linkedit");

        verticalLayout_2->addWidget(linkedit);


        retranslateUi(UploadLink);

        QMetaObject::connectSlotsByName(UploadLink);
    } // setupUi

    void retranslateUi(QDialog *UploadLink)
    {
        UploadLink->setWindowTitle(QCoreApplication::translate("UploadLink", "Dialog", nullptr));
        cancel->setText(QCoreApplication::translate("UploadLink", "Cancel", nullptr));
        upload->setText(QCoreApplication::translate("UploadLink", "Upload", nullptr));
        label->setText(QCoreApplication::translate("UploadLink", "Format Pengumpulan", nullptr));
        label_2->setText(QCoreApplication::translate("UploadLink", "- Upload Ke Google Drive", nullptr));
        label_3->setText(QCoreApplication::translate("UploadLink", "- Setting open Url", nullptr));
        label_4->setText(QCoreApplication::translate("UploadLink", "- Copy Url dan Paste ke Form dibawah ini.", nullptr));
        linkedit->setPlaceholderText(QCoreApplication::translate("UploadLink", "Masukkan Link", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UploadLink: public Ui_UploadLink {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPLOADLINK_H
