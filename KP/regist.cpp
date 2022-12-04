#include "regist.h"
#include "ui_regist.h"
#include <QModelIndex>
#include <QtSql>
#include <QDebug>
#include <QMessageBox>

Regist::Regist(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Regist)
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");

    ui->setupUi(this);
}

Regist::~Regist()
{
    delete ui;
}

void Regist::on_toolButton_clicked()
{
    main = new MainWindow();
    this->hide();
    main->show();
}


void Regist::on_regist_clicked()
{
    QString user = ui->username->text();
    QString pass = ui->password->text();
    if(db.open()){
        QSqlQuery q;
        q.exec("SELECT * FROM mahasiswa where usermame='"+user+"'");
        int count =0;
        while(q.next()){
            count++;
        }

        if(user== "" || pass== ""){
            QMessageBox:: warning(this,"Warning","Invalid username or password!");
        }else if(count==1){
            QMessageBox:: information(this,"Info","Your account already exists");
        }else{
//            qDebug() << q.prepare("insert into mahasiswa values('"+user+"','"+pass+"')");
//            qDebug() << q.prepare("insert into detail_mahasiswa  values('"+user+"','','','')");

            q.prepare("insert into mahasiswa values('"+user+"','"+pass+"')");
            if(q.exec()){
                q.prepare("insert into detail_mahasiswa  values('"+user+"','','','')");
                if(q.exec()){
                    QMessageBox::information(this,"Info","Registered successfully");
                    main = new MainWindow();
                    this->hide();
                    main->show();
                }else{
                    QMessageBox::information(this,"Warning","Registered failed!");
                }
            }else {

                QMessageBox::warning(this,"Info","Registered failed!");
            }

        }
    }else{
        QMessageBox:: information(this,"Info","invalid connected to database");
    }

}

