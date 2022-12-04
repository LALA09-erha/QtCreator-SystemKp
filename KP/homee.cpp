#include "homee.h"
#include "ui_homee.h"
#include <QMenu>
#include <QMenuBar>
#include <QDebug>
#include <QtSql>
#include <QMessageBox>
#include <QDialog>



Homee::Homee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Homee)
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");

}

Homee::~Homee()
{
    delete ui;
}

void Homee::setData(const QString &labelText){
    user = labelText;
    if(db.open()){
        QSqlQuery q;
        q.exec("SELECT * FROM mahasiswa where usermame='"+user+"'");
        int count =0;
        while(q.next()){
            count++;
        }
        if(count==0){
            q.exec("SELECT * FROM admin where username='"+user+"'");
            while(q.next()){
                count++;
            }
            if(count==1){
                ui->awal->setTabVisible(1,false);
                ui->awal->setTabVisible(2,false);
                ui->awal->setTabVisible(3,false);
            }
        }else{
             ui->awal->setTabVisible(4,false);
             ui->awal->setTabVisible(5,false);
        }
    }else{
        qDebug() << "close";
    }
}
