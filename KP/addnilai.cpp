#include "addnilai.h"
#include "ui_addnilai.h"
#include <QDebug>
#include <QMessageBox>

AddNilai::AddNilai(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddNilai)
{
    ui->setupUi(this);
}

AddNilai::~AddNilai()
{
    delete ui;
}

void AddNilai::setData(const QList<QString> &user){
    ui->nim->setText(user[0]);
    userr = user[0];
    tanggal = user[1];
    ui->nilai->setMaximum(100);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");
    if(db.open()){
        QSqlQuery q;
        q.exec("select nilai from surat where nim='"+userr+"' and waktupengajuan='"+tanggal+"'");
        if(q.next()){
            if( q.value(0).toString() ==""){
                ui->nilai->setValue(0);
            }else{
                ui->nilai->setValue(q.value(0).toInt());
            }
        }
    }
}

void AddNilai::on_pushButton_clicked()
{
    QString nilai = ui->nilai->text();

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");

    if(db.open()){
        QSqlQuery q;
        q.exec("select nilai from surat where nim='"+userr+"' and waktupengajuan='"+tanggal+"'");
        if(q.next()){
//            qDebug() << q.value(0);
            if(nilai == q.value(0).toString()){
                QMessageBox::information(this,"Info","Nilai Tidak Berubah");
                this->hide();
                this->close();
            }else{
                q.exec("update surat set nilai='"+nilai+"'  where nim='"+userr+"' and waktupengajuan='"+tanggal+"'");
                QMessageBox::information(this,"Info","Nilai Berhasil Ditambahkan");
                this->hide();
                this->close();
            }
        }
    }
}


void AddNilai::on_pushButton_2_clicked()
{
    this->hide();
    this->close();
}

