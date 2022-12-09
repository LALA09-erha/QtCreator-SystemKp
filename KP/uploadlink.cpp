#include "uploadlink.h"
#include "ui_uploadlink.h"
#include <QModelIndex>
#include <QtSql>
#include <QDebug>
#include <QMessageBox>

UploadLink::UploadLink(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UploadLink)
{
    ui->setupUi(this);
}

UploadLink::~UploadLink()
{
    delete ui;
}

void UploadLink::setData(const QString &user){
    userr = user;
}



void UploadLink::on_upload_clicked()
{
    QString link = ui->linkedit->text();
    if(link==""){
        QMessageBox::warning(this,"Warning","Harap Menghisi Form dengan Valid!");
    }else if(!(link.contains("https")) || !(link.contains("http"))){
        QMessageBox::warning(this,"Warning","Harap Menghisi Form dengan Valid!");
    }else{
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");

        if(db.open()){
            QSqlQuery q;
            if(q.exec("update surat set upload='"+link+"' where nim='"+userr+"'")){
                QMessageBox::information(this,"Info","Berhasil Dikirim");
                this->close();
                this->hide();
            }
        }

    }
}


void UploadLink::on_cancel_clicked()
{
    this->hide();
    this->close();
}

