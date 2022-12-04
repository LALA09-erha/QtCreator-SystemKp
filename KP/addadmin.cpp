#include "addadmin.h"
#include "ui_addadmin.h"
#include <QDebug>
#include <QMessageBox>

AddAdmin::AddAdmin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddAdmin)
{
    ui->setupUi(this);
}

AddAdmin::~AddAdmin()
{
    delete ui;
}


void AddAdmin::on_cancel_2_clicked()
{
    this->hide();
    this->close();
}


void AddAdmin::on_add_admin_clicked()
{
    QString username = ui->username->text();
    QString password = ui->password->text();

    if(username==""&&password==""){
        QMessageBox::warning(this,"Warning","Harap Isi Semua Kolom!");
    }else{
        //cek apakah username ada di dalam database
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");
        if(db.open()){
            QSqlQuery q;
            q.exec("select * from admin where username='"+username+"'");
            int count = 0;
            if(q.next()){
                count++;
            }

            if(count==1){
                QMessageBox::warning(this,"Warning","Data Sudah Ada!");
            }else{
//                        q.exec("insert into admin (username,password) values('"+username+"','"+password+"')");
                    if(q.exec("insert into admin (username,password) values('"+username+"','"+password+"')")){
                            QMessageBox::information(this,"Info","Data Berhasil Ditambahkan,Harap Refresh Halaman");

                            this->hide();
                            this->close();
                }
            }
        }
    }
}

