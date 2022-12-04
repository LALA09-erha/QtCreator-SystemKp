#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSql>
#include <QSqlDatabase>
#include <QDebug>
#include <QList>
#include <QMessageBox>
#include <ctype.h>
#include <stdio.h>
#include <string>
#include <QModelIndex>
#include <QPixmap>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");



    // for connect signal
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{

    QString user = ui->username->text();
    QString pass = ui->password->text();

    if(db.open()){
        QSqlQuery q;
        q.exec("SELECT * FROM mahasiswa where usermame='"+user+"' and password='"+ pass+"'");
        int count =0;
//        qDebug() <<q.exec("SELECT * FROM mahasiswa where usermame='"+user+"' and password='"+ pass+"'");
//        qDebug() <<q.next();
        while (q.next()) {
            count++;
           }
        if(count==1){

            Home home;


            this->hide();
            home.setData(user);
//            home.show();
            home.setModal(true);

            home.exec();
        }else{
            q.exec("SELECT * FROM admin where username='"+user+"' and password='"+ pass+"'");
    //        qDebug() <<q.exec("SELECT * FROM mahasiswa where usermame='"+user+"' and password='"+ pass+"'");
    //        qDebug() <<q.next();
            while (q.next()) {
                count++;
               }
            if(count==1){
                Home home;

                this->hide();
                home.setData(user);
//                home.show();
                home.setModal(true);

                home.exec();
            }else{
                QMessageBox:: warning(this,"Warning","Username Or Password inCorrect");
            }
        }

    }else{
        qDebug() << "CLOSE";
        qDebug() << db.databaseName();
    }

}


void MainWindow::on_toolButton_clicked()
{
    Regist regist;
    this->hide();
    regist.setModal(true);
    regist.exec();
}

