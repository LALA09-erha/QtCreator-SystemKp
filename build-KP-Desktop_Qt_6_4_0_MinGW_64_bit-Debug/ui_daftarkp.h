/********************************************************************************
** Form generated from reading UI file 'daftarkp.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAFTARKP_H
#define UI_DAFTARKP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DaftarKp
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QVBoxLayout *verticalLayout;
    QLineEdit *nim;
    QLineEdit *nama;
    QLineEdit *jurusan;
    QLineEdit *dosen;
    QLineEdit *perusahaan;
    QLineEdit *judul;
    QDateEdit *mulai;
    QDateEdit *akhir;
    QPushButton *Tdaftar;
    QLabel *label_9;

    void setupUi(QDialog *DaftarKp)
    {
        if (DaftarKp->objectName().isEmpty())
            DaftarKp->setObjectName("DaftarKp");
        DaftarKp->resize(399, 481);
        DaftarKp->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 255);\n"
"color: rgb(255, 255, 255);"));
        gridLayout = new QGridLayout(DaftarKp);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(7);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(DaftarKp);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(DaftarKp);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(DaftarKp);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(DaftarKp);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(DaftarKp);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(DaftarKp);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(DaftarKp);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(DaftarKp);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(label_8);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName("verticalLayout");
        nim = new QLineEdit(DaftarKp);
        nim->setObjectName("nim");
        nim->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(nim);

        nama = new QLineEdit(DaftarKp);
        nama->setObjectName("nama");
        nama->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(nama);

        jurusan = new QLineEdit(DaftarKp);
        jurusan->setObjectName("jurusan");
        jurusan->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(jurusan);

        dosen = new QLineEdit(DaftarKp);
        dosen->setObjectName("dosen");
        dosen->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(dosen);

        perusahaan = new QLineEdit(DaftarKp);
        perusahaan->setObjectName("perusahaan");
        perusahaan->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(perusahaan);

        judul = new QLineEdit(DaftarKp);
        judul->setObjectName("judul");
        judul->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(judul);

        mulai = new QDateEdit(DaftarKp);
        mulai->setObjectName("mulai");
        mulai->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(mulai);

        akhir = new QDateEdit(DaftarKp);
        akhir->setObjectName("akhir");
        akhir->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(akhir);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        Tdaftar = new QPushButton(DaftarKp);
        Tdaftar->setObjectName("Tdaftar");
        Tdaftar->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(Tdaftar);


        gridLayout->addLayout(verticalLayout_3, 1, 0, 1, 1);

        label_9 = new QLabel(DaftarKp);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_9, 0, 0, 1, 1);


        retranslateUi(DaftarKp);

        QMetaObject::connectSlotsByName(DaftarKp);
    } // setupUi

    void retranslateUi(QDialog *DaftarKp)
    {
        DaftarKp->setWindowTitle(QCoreApplication::translate("DaftarKp", "Form Pendaftaran KP", nullptr));
        label->setText(QCoreApplication::translate("DaftarKp", "NIM ", nullptr));
        label_2->setText(QCoreApplication::translate("DaftarKp", "Nama", nullptr));
        label_3->setText(QCoreApplication::translate("DaftarKp", "Jurusan", nullptr));
        label_4->setText(QCoreApplication::translate("DaftarKp", "Dosen Pembimbing", nullptr));
        label_5->setText(QCoreApplication::translate("DaftarKp", "Perusahaan / Instansi", nullptr));
        label_6->setText(QCoreApplication::translate("DaftarKp", "Judul Penelitian", nullptr));
        label_7->setText(QCoreApplication::translate("DaftarKp", "Tanggal Mulai Kp", nullptr));
        label_8->setText(QCoreApplication::translate("DaftarKp", "Tanggal Akhir Kp", nullptr));
        jurusan->setPlaceholderText(QCoreApplication::translate("DaftarKp", "Masukkan Jurusan Anda", nullptr));
        dosen->setPlaceholderText(QCoreApplication::translate("DaftarKp", "Masukkan Nama Dosen Pembimbing", nullptr));
        perusahaan->setPlaceholderText(QCoreApplication::translate("DaftarKp", "Masukkan Nama Perusahaan", nullptr));
        judul->setPlaceholderText(QCoreApplication::translate("DaftarKp", "Masukkan Judul Penelitian", nullptr));
        Tdaftar->setText(QCoreApplication::translate("DaftarKp", "daftar", nullptr));
        label_9->setText(QCoreApplication::translate("DaftarKp", "Form Pendaftaran KP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DaftarKp: public Ui_DaftarKp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAFTARKP_H
