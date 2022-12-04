#include "addinfo.h"
#include "ui_addinfo.h"
#include <QDebug>
#include <QMessageBox>

AddInfo::AddInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddInfo)
{
    ui->setupUi(this);
}

AddInfo::~AddInfo()
{
    delete ui;
}

void AddInfo::setData() {
    // set labeltext to form
    ui->opsilabel->addItem("info");
    ui->opsilabel->addItem("alur");
}

void AddInfo::on_add_clicked()
{
    QString info = ui->info->text();
    QString label = ui->opsilabel->currentText();

    if(info==""){
        QMessageBox::warning(this,"Warning","Kolom Info Tidak Boleh Kosong!");
    }else{
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");
        if(db.open()){
            QSqlQuery q;
//            qDebug()<< q.exec("insert into infokp (info,label) values('"+info+"','"+label+"')");
            if( q.exec("insert into infokp (info,label) values('"+info+"','"+label+"')")){
                QMessageBox::information(this,"Info","Data Info Berhasil Ditambahkan,Harap Refresh Halaman");
                this->close();
                this->hide();
            }else{
                QMessageBox::warning(this,"Warning", "Data Info Gagal Ditambahkan!");
            }
        }
    }
}


void AddInfo::on_cancel_clicked()
{
    this->close();
    this->hide();
}

