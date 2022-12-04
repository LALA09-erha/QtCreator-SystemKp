#include "editinfo.h"
#include "ui_editinfo.h"
#include <QDebug>
#include <QMessageBox>

EditInfo::EditInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditInfo)
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");


    ui->setupUi(this);
}

EditInfo::~EditInfo()
{
    delete ui;
}


void EditInfo::setData(const QStringList &labelText) {
    // set labeltext to form
    ui->index->setText(labelText[0]);
    ui->info->setText(labelText[2]);

   if(labelText[1]=="alur"){
       ui->opsilabel->addItem("alur");
       ui->opsilabel->addItem("info");
   }else{

    ui->opsilabel->addItem("info");
    ui->opsilabel->addItem("alur");
    }
    ui->index->setVisible(false);

}


void EditInfo::on_update_clicked()
{
    //get data from form
    QString index = ui->index->text();
    QString label = ui->opsilabel->currentText();
    QString info = ui->info->text();

    //open database
    if(db.open()){
        QSqlQuery q;
        q.exec("SELECT * FROM infokp where idkp='"+index+"'");
        if(q.next()){

            if(
                    q.value(0).toString()==index &&
                    q.value(1).toString()==label &&
                    q.value(2).toString()==info
              ){
                QMessageBox ok;
                QString setText = "Tidak Ada Perubahan Data";
                Home home;
                this->hide();
                home.viewData(setText);
                this->close();
            }else{
                QString labelawal = q.value(1).toString();
                if( q.value(1).toString() == label){
                    q.exec("Update infokp set label='"+label+"', info='"+info+"' where idkp='"+index+"'" );
                }else if(q.value(2).toString() != label){
//                    qDebug()<< q.exec("update infokp set indexlabel= case when indexlabel='"+indexawal+"' then '"+indexlabel+"' when indexlabel='"+indexlabel+"' then '"+indexawal+"' END where label in ('"+q.value(1).toString()+"')");
//                    q.exec("Update infokp set label='"+label+"' where label='"+indexlabel+"' AND label='"+label+"'");
//                    if(q.next()){
                        q.exec("Update infokp set label='"+label+"' where idkp='"+index+"'");
//                    }
                }


                QString setText = "Berhasil Mengubah Data,Harap Refresh Halaman";
                Home home;
                this->hide();
                home.viewData(setText);
                this->close();

            }



        }
    }else{
        qDebug() <<  " CLOSE";
    }
}


void EditInfo::on_cancel_clicked()
{
    this->close();
}

