#include "home.h"
#include "ui_home.h"
#include <QMenu>
#include <QMenuBar>
#include <QDebug>
#include <QtSql>
#include <QMessageBox>
#include <string>
#include <QPrinter>
#include <QTextDocument>

Home::Home(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Home)
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");

    ui->setupUi(this);

}

Home::~Home()
{
    delete ui;
    this->close();
}

void Home::setData(const QString &labelText){
    user = labelText;
    QString year =  QString::number(QDate::currentDate().year());
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");
    if(db.open()){
        QSqlQuery q;


        //check detail mahasiswa
        if(q.exec("Select * from detail_mahasiswa where id_mhs='"+user+"'")){
            if(q.next()){
                if(q.value(1).toString()==""){
                    ui->pengumuman->setText("Harap Melengkapi Data Diri Pada Profile Terlebih Dahulu");
                    ui->tombolAwal->setEnabled(false);
                    ui->uploadlink->setHidden(true);
                }else{
                    ui->pengumuman->setHidden(true);
                    ui->uploadlink->setHidden(true);
                }

            }
        }
        //check apakah mahasiswa sudah daftar kp atau tidak
        if(q.exec("select * from surat where nim='"+user+"'")){
            if(q.next()){

                if((q.value(8).toString() >= "01/7/"+year) && (q.value(8).toString() <= "31/12/"+year) ){
                    ui->tombolAwal->setText("Cetak");
                    ui->uploadlink->setHidden(false);
//                    qDebug() << "truee";
                }else if((q.value(8).toString() >= "0/1/"+year) && (q.value(8).toString() <= "30/6/"+year)){
                    ui->tombolAwal->setText("Cetak");
                    ui->uploadlink->setHidden(false);
//                    qDebug() << "trueee";
                }else{
//                    qDebug() << "true";
//                    qDebug() << q.value(8).toString();
//                    qDebug() <<"1/7/"+year;
//                    qDebug() << (q.value(8).toString() <= "31/12/"+year);
//                    qDebug() << (q.value(8).toString() >= "01/7/"+year);
                    ui->tombolAwal->setText("Daftar KP");
                    ui->uploadlink->setHidden(true);
                }
            }else{
                ui->uploadlink->setHidden(true);
                ui->tombolAwal->setText("Daftar KP");
            }
        }



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
                ui->awal->setTabEnabled(1,false);
                ui->awal->setTabVisible(2,false);
                ui->awal->setTabEnabled(2,false);
                ui->awal->setTabVisible(3,false);
                ui->awal->setTabEnabled(3,false);
                ui->pengumuman->setText("Anda Masuk Sebagai Admin");
                ui->viewadmin->setStyleSheet("QHeaderView::section { background-color:black;color:white }");
                ui->viewinfo->setStyleSheet("QHeaderView::section { background-color:black;color:white }");
                ui->nilaimahasiswa->setStyleSheet("QHeaderView::section { background-color:black;color:white }");
                ui->tombolAwal->setText("Anda Admin");
                ui->tombolAwal->setEnabled(false);
            }
        }else{
             ui->tview->setStyleSheet("QHeaderView::section { background-color:black;color:white }");
             ui->ttview->setStyleSheet("QHeaderView::section { background-color:black;color:white }");
             ui->awal->setTabVisible(4,false);
             ui->awal->setTabEnabled(4,false);
             ui->awal->setTabEnabled(5,false);
             ui->awal->setTabVisible(5,false);
             ui->awal->setTabEnabled(6,false);
             ui->awal->setTabVisible(6,false);
        }
    }else{
        qDebug() << "close";
    }
}
void Home::viewData(const QString &labelText){
    QMessageBox ok;

    ok.setText(labelText);

    ok.setStandardButtons(QMessageBox::Ok);

    ok.setDefaultButton(QMessageBox::Ok);

    if(ok.exec()== QMessageBox::Ok){

        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");
        if(db.open()){
            QSqlQuery q;
            QSqlQueryModel *model = new QSqlQueryModel;
            q.prepare("SELECT * FROM infokp");
            q.exec();
            model->setQuery(q);
            ui->viewinfo->setModel(model);
        }

    }
}



void Home::on_awal_tabBarClicked(int index)
{
    if(index==0){
        QString year =  QString::number(QDate::currentDate().year());
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");
        if(db.open()){
            QSqlQuery q;


            //check detail mahasiswa
            if(q.exec("Select * from detail_mahasiswa where id_mhs='"+user+"'")){
                if(q.next()){
                    if(q.value(1).toString()==""){
                        ui->pengumuman->setText("Harap Melengkapi Data Diri Pada Profile Terlebih Dahulu");
                        ui->tombolAwal->setEnabled(false);
                        ui->uploadlink->setHidden(true);
                    }else{
                        ui->uploadlink->setHidden(true);
                        ui->pengumuman->setHidden(true);
                    }

                }
            }
            //check apakah mahasiswa sudah daftar kp atau tidak
            if(q.exec("select * from surat where nim='"+user+"'")){
                if(q.next()){

                    if((q.value(8).toString() >= "01/7/"+year) && (q.value(8).toString() <= "31/12/"+year) ){
                        ui->tombolAwal->setText("Cetak");
                        ui->uploadlink->setHidden(false);
    //                    qDebug() << "truee";
                    }else if((q.value(8).toString() >= "0/1/"+year) && (q.value(8).toString() <= "30/6/"+year)){
                        ui->tombolAwal->setText("Cetak");
                        ui->uploadlink->setHidden(false);
    //                    qDebug() << "trueee";
                    }else{
    //                    qDebug() << "true";
    //                    qDebug() << q.value(8).toString();
    //                    qDebug() <<"1/7/"+year;
    //                    qDebug() << (q.value(8).toString() <= "31/12/"+year);
    //                    qDebug() << (q.value(8).toString() >= "01/7/"+year);
                        ui->tombolAwal->setText("Daftar KP");
                        ui->tombolAwal->setEnabled(true);
                        ui->uploadlink->setHidden(true);
                    }
                }else{
//                    ui->tombolAwal->setEnabled(false);
//                    ui->uploadlink->setHidden(true);
//                    ui->tombolAwal->setText("Anda Admin");
                    ui->tombolAwal->setText("Daftar KP");
                    ui->tombolAwal->setEnabled(true);
                    ui->uploadlink->setHidden(true);
                }
            }
        }
    }else if(index==1){
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");
        if(db.open()){
            QSqlQuery q;
            QStringListModel *model = new QStringListModel(this);
            QStringList list;
//            q.prepare();
            q.exec("SELECT * FROM infokp where label='info'");
//            qDebug() << q.value(2);
            while(q.next()){
                list.append(q.value(2).toString());
            }
            model->setStringList(list);
            ui->tview->setModel(model);
            ui->tview->setEditTriggers(QAbstractItemView::NoEditTriggers);
            ui->tview->horizontalHeader()->hide();
            ui->tview->horizontalHeader()->setStretchLastSection(true);
        }
    }else if(index==2){
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");
        if(db.open()){
            QSqlQuery q;
            QStringListModel *model = new QStringListModel(this);
            QStringList list;
//            q.prepare();
            q.exec("SELECT * FROM infokp where label='alur'");
//            qDebug() << q.value(2);
            while(q.next()){
                list.append(q.value(2).toString());
            }
            model->setStringList(list);
            ui->ttview->setModel(model);
            ui->ttview->setEditTriggers(QAbstractItemView::NoEditTriggers);
            ui->ttview->horizontalHeader()->hide();
            ui->ttview->horizontalHeader()->setStretchLastSection(true);
        }
    }
    else if(index==3){
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");
        if(db.open()){
            QSqlQuery q;
            q.exec("select * from mahasiswa where usermame='"+user+"'");
            if(q.next()){

                ui->username_user->setText(user);
                ui->username_user->setReadOnly(true);
                ui->password_user->setText(q.value(1).toString());
            }

            q.exec("select * from detail_mahasiswa where id_mhs='"+user+"'");
            if(q.next()){
                if(q.value(1).toString()==""||q.value(2).toString() ==""||q.value(3).toInt()==0){
                    ui->informasi->setText("Data Diri Belum lengkap!");
                }
                ui->nama_user->setText(q.value(1).toString());
                ui->alamat_user->setText(q.value(2).toString());
                ui->sks->setValue(q.value(3).toInt());

            }

            if(q.exec("select * from surat where nim='"+user+"'")){
                int j = 0;
//                qDebug() << q.next();
                while(q.next()){
                    if(!nilai.contains(q.value(8).toString())){
                        nilai.append(q.value(8).toString());
                        ui->nilainilai->addItem(q.value(8).toString() +" | "+ q.value(10).toString());
                    }
                    j++;
                }
                if(j==0){
                    ui->nilainilai->addItem("Anda Belum Mempunyai Riwayat Nilai");
                    ui->nilainilai->setDisabled(true);
                }
            }
            ui->save->setDisabled(true);

        }

    }else if(index==4){
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");
        if(db.open()){
            QSqlQuery q;
            QSqlQueryModel *model = new QSqlQueryModel;
            q.prepare("SELECT * FROM infokp");
            q.exec();
            model->setQuery(q);
            ui->viewinfo->setModel(model);
            ui->viewinfo->horizontalHeader()->setStretchLastSection(true);
        }
    }else if(index==5){
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");
        if(db.open()){
            QSqlQuery q;
            QSqlQueryModel *model = new QSqlQueryModel;
            q.prepare("SELECT * FROM admin");
            q.exec();
            model->setQuery(q);
            ui->viewadmin->setModel(model);
            ui->viewadmin->horizontalHeader()->setStretchLastSection(true);
        }
    }else if(index==6){
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");
        if(db.open()){
            QSqlQuery q;
            QSqlQueryModel *model = new QSqlQueryModel;
            q.prepare("SELECT nim,nama,dosenp,perusahaan,waktupengajuan,upload,nilai FROM surat");
            q.exec();
            model->setQuery(q);
            ui->nilaimahasiswa->setModel(model);
            ui->nilaimahasiswa->horizontalHeader()->setStretchLastSection(true);
            ui->nilaimahasiswa->setSelectionBehavior(QAbstractItemView::SelectRows);
        }
    }

}


void Home::on_viewinfo_doubleClicked(const QModelIndex &index)
{    // get index
    int row = index.row();
    QString  ind = index.sibling(row, 0).data().toString();
    // get data from database
    QStringList  listdata;
    QString label;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");
    if(db.open()){
        QSqlQuery q;
        q.exec("SELECT * FROM infokp where idkp='"+ind +"'");
        if(q.next()){
            listdata.append(q.value(0).toString());
            listdata.append(q.value(1).toString());
            listdata.append(q.value(2).toString());
            label = q.value(1).toString();

        }
        q.exec("select count(*) from infokp where label='"+label+"'");
        if(q.next()){
            listdata.append(q.value(0).toString());
        }
    }else{
//        qDebug() << db.open();
    }

    //make massage box
     QMessageBox msgBox;
     msgBox.setWindowTitle("Detail Info");
     msgBox.setIcon(QMessageBox::Information);
     msgBox.setWindowIcon(QIcon("D:/SteamLibrary/steamapps/Qt/db/information.png"));
     msgBox.setText("The data has been clicked.");
     msgBox.setInformativeText("What do you want to change?");
     QPushButton *updateButton = msgBox.addButton(tr("Update"), QMessageBox::ActionRole);
     QPushButton *deleteButton = msgBox.addButton(tr("Delete"), QMessageBox::ActionRole);
     msgBox.setStandardButtons(QMessageBox::Cancel);
     msgBox.setDefaultButton(QMessageBox::Cancel);
     msgBox.exec();

     // eksekusi button
     if(msgBox.clickedButton()==updateButton){
         EditInfo editinfo;
//         this->hide();
         editinfo.setModal(true);
         editinfo.setData(listdata);
         editinfo.exec();
//         QMessageBox::information(this,"Info","Update");
     }else if(msgBox.clickedButton()==deleteButton){
            QMessageBox msg;
            msg.setInformativeText("What do you want to delete?");
            QPushButton *deleteButton = msg.addButton(tr("Delete"), QMessageBox::ActionRole);
            msg.setStandardButtons(QMessageBox::Cancel);
            msg.setDefaultButton(QMessageBox::Cancel);
            msg.exec();

            if(msg.clickedButton()==deleteButton){
                db = QSqlDatabase::addDatabase("QSQLITE");
                db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");
                if(db.open()){
                    QSqlQuery q;
                    q.exec("Delete from infokp where idkp='"+listdata[0]+"'");

                    QMessageBox ok;

                    ok.setText("Data Berhasil Dihapus");

                    ok.setStandardButtons(QMessageBox::Ok);

                    ok.setDefaultButton(QMessageBox::Ok);

                    if(ok.exec()== QMessageBox::Ok){

                        db = QSqlDatabase::addDatabase("QSQLITE");
                        db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");
                        if(db.open()){
                            QSqlQuery q;
                            QSqlQueryModel *model = new QSqlQueryModel;
                            q.prepare("SELECT * FROM infokp");
                            q.exec();
                            model->setQuery(q);
                            ui->viewinfo->setModel(model);
                        }

                    }

                }
            }else{
                qDebug() << "Yes was no clicked";

            }

     }else{
         msgBox.close();
     }

}


void Home::on_refr_clicked()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");
    if(db.open()){
        QSqlQuery q;
        QSqlQueryModel *model = new QSqlQueryModel;
        q.prepare("SELECT * FROM infokp");
        q.exec();
        model->setQuery(q);
        ui->viewinfo->setModel(model);

    }else{
      qDebug() << "CLOSE TAB BAR";
    }
}




void Home::on_pushButton_2_clicked()
{

         AddInfo addinfo;
//         this->hide();
         addinfo.setModal(true);
         addinfo.setData();
         addinfo.exec();
}


void Home::on_viewadmin_doubleClicked(const QModelIndex &index)
{
    int row = index.row();
    QString  ind = index.sibling(row, 0).data().toString();
    // get data from database


    QMessageBox msg;
    msg.setInformativeText("What do you want to delete?");
    QPushButton *deleteButton = msg.addButton(tr("Delete"), QMessageBox::ActionRole);
    msg.setStandardButtons(QMessageBox::Cancel);
    msg.setDefaultButton(QMessageBox::Cancel);
    msg.exec();
    if(msg.clickedButton()==deleteButton){
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");
        if(db.open()){
//            qDebug() << ind;
            QSqlQuery q;
            q.exec("Delete from admin where idadmin='"+ind+"'");
            QMessageBox ok;
            ok.setText("Data Berhasil Dihapus");
            ok.setStandardButtons(QMessageBox::Ok);
            ok.setDefaultButton(QMessageBox::Ok);
            if(ok.exec()== QMessageBox::Ok){
                db = QSqlDatabase::addDatabase("QSQLITE");
                db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");
                if(db.open()){
                    QSqlQuery q;
                    QSqlQueryModel *model = new QSqlQueryModel;
                    q.prepare("SELECT * FROM admin");
                    q.exec();
                    model->setQuery(q);
                    ui->viewadmin->setModel(model);
                }
            }
        }
    }else{
        msg.close();
    }
}


void Home::on_addadmin_clicked()
{
    // ADD ADMIN
    AddAdmin addadmin;
//         this->hide();
    addadmin.setModal(true);
    addadmin.exec();
}


void Home::on_refradmin_clicked()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");
    if(db.open()){
        QSqlQuery q;
        QSqlQueryModel *model = new QSqlQueryModel;
        q.prepare("SELECT * FROM admin");
        q.exec();
        model->setQuery(q);
        ui->viewadmin->setModel(model);

    }else{
      qDebug() << "CLOSE TAB BAR";
    }

}


void Home::on_username_user_textChanged(const QString &arg1)
{
    ui->save->setDisabled(false);
    ui->save->setEnabled(true);
}

void Home::on_password_user_textChanged(const QString &arg1)
{
    ui->save->setDisabled(false);
    ui->save->setEnabled(true);
}

void Home::on_nama_user_textChanged(const QString &arg1)
{
    ui->save->setDisabled(false);
    ui->save->setEnabled(true);
}

void Home::on_alamat_user_textChanged(const QString &arg1)
{
    ui->save->setDisabled(false);
    ui->save->setEnabled(true);
}


void Home::on_sks_valueChanged(int arg1)
{
    ui->save->setDisabled(false);
    ui->save->setEnabled(true);
}


void Home::on_save_clicked()
{
    QString username = ui->username_user->text();
    QString password = ui->password_user->text();
    QString nama = ui->nama_user->text();
    QString alamat = ui->alamat_user->text();
    QString sks = QString::number(ui->sks->value());
//    int sks = ui->sks->value();


    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");
    if(db.open()){
         QSqlQuery q;
         if(username=="" || password=="" || nama==""||alamat==""||sks=="0" ){
            QMessageBox::warning(this,"Warning","Harap Diisi Semua Kolom");
         }
         else if(q.exec("select * from mahasiswa where usermame='"+user+"'")){
             if(q.next()){
                 if(q.value(0).toString()== username && q.value(1).toString() == password){
                     q.exec("select * from detail_mahasiswa where id_mhs='"+user+"'");
                     if(q.next()){
                         if(q.value(1).toString()==nama && q.value(2).toString()==alamat && q.value(3).toString()==sks){
                                QMessageBox::information(this,"Info","Data Tidak Ada Perubahan");
                         }else{
                             if(username==user){
                                 if(q.exec("Update mahasiswa set usermame='"+username+"', password='"+password+"' where usermame='"+user+"'")){
//                                     qDebug() << "TESST 11";

                                     q.exec("Update detail_mahasiswa set id_mhs='"+username+"',nama='"+nama+"',alamat='"+alamat+"',totalsks="+sks+" where id_mhs='"+user+"'");
                                     QMessageBox::information(this,"Info","Data Berhasil DiUpdate");
                                     user = username;
                                     ui->username_user->setText(user);
                                     ui->password_user->setText(password);
                                     ui->alamat_user->setText(alamat);
                                     ui->nama_user->setText(nama);
                                     ui->sks->setValue(sks.toInt());
                                 }
                             }else{
//                                 qDebug()<<q.exec("select * from mahasiswa where usermame='"+username+"'");
                                 if(q.exec("select * from mahasiswa where usermame='"+username+"'")){
                                     if(q.next()){
                                            QMessageBox::warning(this,"Warning","Data Tidak Boleh Duplikat");
                                     }else{
                                         if(q.exec("Update mahasiswa set usermame='"+username+"', password='"+password+"' where usermame='"+user+"'")){

//                                             qDebug() << "TESST 12 ";

                                             q.exec("Update detail_mahasiswa set id_mhs='"+username+"',nama='"+nama+"',alamat='"+alamat+"',totalsks="+sks+" where id_mhs='"+user+"'");
                                             QMessageBox::information(this,"Info","Data Berhasil DiUpdate");
                                             user = username;
                                             ui->username_user->setText(user);
                                             ui->password_user->setText(password);
                                             ui->alamat_user->setText(alamat);
                                             ui->nama_user->setText(nama);
                                             ui->sks->setValue(sks.toInt());
                                         }
                                     }

                                  }else{
                                     if(q.exec("Update mahasiswa set usermame='"+username+"', password='"+password+"' where usermame='"+user+"'")){

//                                         qDebug() << "TESST 13";


                                         q.exec("Update detail_mahasiswa set id_mhs='"+username+"',nama='"+nama+"',alamat='"+alamat+"',totalsks="+sks+" where id_mhs='"+user+"'");
                                         QMessageBox::information(this,"Info","Data Berhasil DiUpdate");
                                         user = username;
                                         ui->username_user->setText(user);
                                         ui->password_user->setText(password);
                                         ui->alamat_user->setText(alamat);
                                         ui->nama_user->setText(nama);
                                         ui->sks->setValue(sks.toInt());
                                     }
                                 }
                            }
                         }
                     }


                 }else{
                     if(username==user){
                         if(q.exec("Update mahasiswa set usermame='"+username+"', password='"+password+"' where usermame='"+user+"'")){
//                            qDebug() << "TESST 111";
                             QMessageBox::information(this,"Info","Data Berhasil DiUpdate");

                             q.exec("Update detail_mahasiswa set id_mhs='"+username+"',nama='"+nama+"',alamat='"+alamat+"',totalsks="+sks+" where id_mhs='"+user+"'");
                             user = username;
                             ui->username_user->setText(user);
                             ui->password_user->setText(password);
                             ui->alamat_user->setText(alamat);
                             ui->nama_user->setText(nama);
                             ui->sks->setValue(sks.toInt());
                         }
                     }else{

                         if(q.exec("select * from mahasiswa where usermame='"+username+"'")){
                             if(q.next()){
                                    QMessageBox::warning(this,"Warning","Data Tidak Boleh Duplikat");
                             }else{
                                 if(q.exec("Update mahasiswa set usermame='"+username+"', password='"+password+"' where usermame='"+user+"'")){

//                                     qDebug() << "TESST 1111";
                                     QMessageBox::information(this,"Info","Data Berhasil DiUpdate");

                                     q.exec("Update detail_mahasiswa set id_mhs='"+username+"',nama='"+nama+"',alamat='"+alamat+"',totalsks="+sks+" where id_mhs='"+user+"'");
                                     user = username;
                                     ui->username_user->setText(user);
                                     ui->password_user->setText(password);
                                     ui->alamat_user->setText(alamat);
                                     ui->nama_user->setText(nama);
                                     ui->sks->setValue(sks.toInt());
                                 }
                             }

                          }else{
                             if(q.exec("Update mahasiswa set usermame='"+username+"', password='"+password+"' where usermame='"+user+"'")){
                                 q.exec("Update detail_mahasiswa set id_mhs='"+username+"',nama='"+nama+"',alamat='"+alamat+"',totalsks="+sks+" where id_mhs='"+user+"'");
//                                 qDebug() << "TESST 211";
                                 QMessageBox::information(this,"Info","Data Berhasil DiUpdate");
                                 user = username;
                                 ui->username_user->setText(user);
                                 ui->password_user->setText(password);
                                 ui->alamat_user->setText(alamat);
                                 ui->nama_user->setText(nama);
                                 ui->sks->setValue(sks.toInt());
                             }
                         }
                    }
                }
             }
         }else{
             qDebug() << "Test";
         }
    }else{
        qDebug() << "TUTUP";
    }

    QString year =  QString::number(QDate::currentDate().year());
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");
    if(db.open()){
        QSqlQuery q;
        // cek apakah sudah terdaftar
        if(q.exec("Select * from detail_mahasiswa where id_mhs='"+user+"'")){
            if(q.next()){
                if(q.value(1).toString()==""){
                    ui->pengumuman->setText("Harap Melengkapi Data Diri Pada Profile Terlebih Dahulu");
                    ui->pengumuman->setHidden(true);
                    ui->uploadlink->setHidden(true);

                }else{
                    ui->pengumuman->setHidden(true);
                    ui->uploadlink->setHidden(true);
                }

            }
        }
        //check apakah mahasiswa sudah daftar kp atau tidak
        if(q.exec("select * from surat where nim='"+user+"'")){
            if(q.next()){

                if((q.value(8).toString() >= "01/7/"+year) && (q.value(8).toString() <= "31/12/"+year) ){
                    ui->tombolAwal->setText("Cetak");
                    ui->uploadlink->setHidden(false);
    //                    qDebug() << "truee";
                }else if((q.value(8).toString() >= "0/1/"+year) && (q.value(8).toString() <= "30/6/"+year)){
                    ui->tombolAwal->setText("Cetak");
                    ui->uploadlink->setHidden(false);
    //                    qDebug() << "trueee";
                }else{
    //                    qDebug() << "true";
    //                    qDebug() << q.value(8).toString();
    //                    qDebug() <<"1/7/"+year;
    //                    qDebug() << (q.value(8).toString() <= "31/12/"+year);
    //                    qDebug() << (q.value(8).toString() >= "01/7/"+year);
                    ui->tombolAwal->setText("Daftar KP");
                    ui->uploadlink->setHidden(true);
                    ui->tombolAwal->setEnabled(true);
                }
            }else{
                ui->tombolAwal->setEnabled(true);
                ui->tombolAwal->setText("Daftar KP");
                ui->uploadlink->setHidden(true);
            }
        }
    }
}





void Home::on_awal_currentChanged(int index)
{
    if(index==0){
        QString year =  QString::number(QDate::currentDate().year());
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");
        if(db.open()){
            QSqlQuery q;


            //check detail mahasiswa
            if(q.exec("Select * from detail_mahasiswa where id_mhs='"+user+"'")){
                if(q.next()){
                    if(q.value(1).toString()==""){
                        ui->pengumuman->setText("Harap Melengkapi Data Diri Pada Profile Terlebih Dahulu");
                        ui->tombolAwal->setEnabled(false);
                        ui->uploadlink->setHidden(true);
                    }else{
                        ui->uploadlink->setHidden(true);
                        ui->pengumuman->setHidden(true);
                    }

                }
            }
            //check apakah mahasiswa sudah daftar kp atau tidak
            if(q.exec("select * from surat where nim='"+user+"'")){
                if(q.next()){

                    if((q.value(8).toString() >= "01/7/"+year) && (q.value(8).toString() <= "31/12/"+year) ){
                        ui->tombolAwal->setText("Cetak");
                        ui->uploadlink->setHidden(false);
    //                    qDebug() << "truee";
                    }else if((q.value(8).toString() >= "0/1/"+year) && (q.value(8).toString() <= "30/6/"+year)){
                        ui->tombolAwal->setText("Cetak");
                        ui->uploadlink->setHidden(false);
    //                    qDebug() << "trueee";
                    }else{
    //                    qDebug() << "true";
    //                    qDebug() << q.value(8).toString();
    //                    qDebug() <<"1/7/"+year;
    //                    qDebug() << (q.value(8).toString() <= "31/12/"+year);
    //                    qDebug() << (q.value(8).toString() >= "01/7/"+year);
                        ui->tombolAwal->setText("Daftar KP");
                        ui->tombolAwal->setEnabled(true);
                        ui->uploadlink->setHidden(true);
                    }
                }else{
//                    ui->tombolAwal->setEnabled(false);
//                    ui->uploadlink->setHidden(true);
//                    ui->tombolAwal->setText("Anda Admin");
                    ui->tombolAwal->setText("Daftar KP");
                    ui->tombolAwal->setEnabled(true);
                    ui->uploadlink->setHidden(true);
                }
            }
        }
    }else if(index==1){
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");
        if(db.open()){
            QSqlQuery q;
            QStringListModel *model = new QStringListModel(this);
            QStringList list;
//            q.prepare();
            q.exec("SELECT * FROM infokp where label='info'");
//            qDebug() << q.value(2);
            while(q.next()){
                list.append(q.value(2).toString());
            }
            model->setStringList(list);
            ui->tview->setModel(model);
            ui->tview->setEditTriggers(QAbstractItemView::NoEditTriggers);
            ui->tview->horizontalHeader()->hide();
            ui->tview->horizontalHeader()->setStretchLastSection(true);
        }
    }else if(index==2){
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");
        if(db.open()){
            QSqlQuery q;
            QStringListModel *model = new QStringListModel(this);
            QStringList list;
//            q.prepare();
            q.exec("SELECT * FROM infokp where label='alur'");
//            qDebug() << q.value(2);
            while(q.next()){
                list.append(q.value(2).toString());
            }
            model->setStringList(list);
            ui->ttview->setModel(model);
            ui->ttview->setEditTriggers(QAbstractItemView::NoEditTriggers);
            ui->ttview->horizontalHeader()->hide();
            ui->ttview->horizontalHeader()->setStretchLastSection(true);
        }
    }
    else if(index==3){
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");
        if(db.open()){
            QSqlQuery q;
            q.exec("select * from mahasiswa where usermame='"+user+"'");
            if(q.next()){

                ui->username_user->setText(user);
                ui->username_user->setReadOnly(true);
                ui->password_user->setText(q.value(1).toString());

            }
            q.exec("select * from detail_mahasiswa where id_mhs='"+user+"'");
            if(q.next()){
                if(q.value(1).toString()==""||q.value(2).toString() ==""||q.value(3).toInt()==0){
                    ui->informasi->setText("Data Diri Belum lengkap!");
                }
                ui->nama_user->setText(q.value(1).toString());
                ui->alamat_user->setText(q.value(2).toString());
                ui->sks->setValue(q.value(3).toInt());

            }

            if(q.exec("select * from surat where nim='"+user+"'")){
                int j = 0;
                while(q.next()){
                    if(!nilai.contains(q.value(8).toString())){
                        nilai.append(q.value(8).toString());
                        ui->nilainilai->addItem(q.value(8).toString() +" | "+ q.value(10).toString());
                    }
                    j++;

                }
                if(j==0){
                    ui->nilainilai->addItem("Anda Belum Mempunyai Riwayat Nilai");
                    ui->nilainilai->setDisabled(true);
                }
            }

            ui->save->setDisabled(true);


        }
    }else if(index==4){
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");
        if(db.open()){
            QSqlQuery q;
            QSqlQueryModel *model = new QSqlQueryModel;
            q.prepare("SELECT * FROM infokp");
            q.exec();
            model->setQuery(q);
            ui->viewinfo->setModel(model);
            ui->viewinfo->horizontalHeader()->setStretchLastSection(true);
        }
    }else if(index==5){
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");
        if(db.open()){
            QSqlQuery q;
            QSqlQueryModel *model = new QSqlQueryModel;
            q.prepare("SELECT * FROM admin");
            q.exec();
            model->setQuery(q);
            ui->viewadmin->setModel(model);
            ui->viewadmin->horizontalHeader()->setStretchLastSection(true);
        }
    }else if(index==6){
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");
        if(db.open()){
            QSqlQuery q;
            QSqlQueryModel *model = new QSqlQueryModel;
            q.prepare("SELECT nim,nama,dosenp,perusahaan,waktupengajuan,upload,nilai FROM surat");
            q.exec();
            model->setQuery(q);
            ui->nilaimahasiswa->setModel(model);
            ui->nilaimahasiswa->horizontalHeader()->setStretchLastSection(true);
            ui->nilaimahasiswa->setSelectionBehavior(QAbstractItemView::SelectRows);
        }
    }

}






void Home::on_tombolAwal_clicked()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");
    QString check_text= ui->tombolAwal->text();
    if(db.open()){
        QSqlQuery q;
        if(check_text=="Daftar KP"){
            QString year =  QString::number(QDate::currentDate().year());
            if(q.exec("Select * from detail_mahasiswa where id_mhs='"+user+"'")){
                if(q.next()){
                    if(q.value(3).toInt()<95){
                        QMessageBox::warning(this,"Warning","SKS Anda Tidak Memenuhi Syarat!");
                    }else{
    //                    qDebug() << "truee";
                        if(q.exec("select * from surat where nim='"+user+"'")){
                            if(q.next()){
    //                            qDebug() << "trueeee";
                                if(q.value(8).toString() >= "01/7/"+year && q.value(8).toString() <= "31/12/"+year ){
                                    QMessageBox::warning(this,"Warning","Anda Sudah Terdaftar Untuk Periode ini!");
                                }else if(q.value(8).toString() >= "01/1/"+year && q.value(8).toString() <= "30/6/"+year){
                                    QMessageBox::warning(this,"Warning","Anda Sudah Terdaftar Untuk Periode ini!");
                                }else{
                                    DaftarKp daftar;
                                    daftar.setData(user);
                                    daftar.exec();
                                }
                            }else{
    //                            qDebug() << true;
                                DaftarKp daftar;
                                daftar.setData(user);
                                daftar.exec();
                            }
                        }else{
    //                        qDebug() << true;
                            DaftarKp daftar;
                            daftar.setData(user);
                            daftar.exec();
                        }

                    }
                }
            }
        }else{

            db = QSqlDatabase::addDatabase("QSQLITE");
            db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");
            QString path =  QStandardPaths::writableLocation(QStandardPaths::DownloadLocation);


            if(db.open()){
                QSqlQuery q;
                if(q.exec("select * from surat where nim='"+user+"'")){
                    if(q.next()){
                        QString nim = q.value(0).toString();
                        QString nama = q.value(1).toString();
                        QString jurusan = q.value(2).toString();
                        QString dosen = q.value(3).toString();
                        QString inst = q.value(4).toString();
                        QString judul = q.value(5).toString();
                        QString waktu_mulai = q.value(6).toString();
                        QString waktu_end = q.value(7).toString();
                        QString waktu_pengajuan = q.value(8).toString();

                        QString tamplate =
                                "<p style='margin-top: 0pt; margin-bottom: 0pt; font-size: 8pt; text-align: center;'><strong>DAPARTEMEN PENDIDIKAN NASIONAL&nbsp;</strong></p>"
                                "<p style='margin-top: 0pt; margin-bottom: 0pt; font-size: 8pt; text-align: center;'><strong>UNIVERSITAS TRUNOJOYO MADURA&nbsp;</strong></p>"
                                "<p style='margin-top: 0pt; margin-bottom: 0pt; font-size: 8pt; text-align: center;'><strong>FAKULTAS TEKNIK</strong></p>"
                                "<p style='text-align: center;'>&nbsp;</p>"
                                "<p style='text-align: center;'>FORM PENGAJUAN SURAT PENGANTAR</p>"
                                "<hr />"
                                "<p style='text-align: center;'>&nbsp;</p>"
                                "<p>Nama&nbsp; &nbsp; &nbsp; &nbsp;  &nbsp;   &nbsp; &nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; : "+nama+"</p>"
                                "<p>&nbsp;</p>"
                                "<p>NPM&nbsp; &nbsp; &nbsp; &nbsp;  &nbsp; &nbsp;  &nbsp;&nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;: "+nim+"</p>"
                                "<p>Jurusan&nbsp; &nbsp;  &nbsp; &nbsp; &nbsp;   &nbsp; &nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp; &nbsp;: "+jurusan+"</p>"
                                "<p>Dosen Pembimbing&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;: "+dosen+"</p>"
                                "<p>&nbsp;</p>"
                                "<p>Surat Pengantar&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; : Pengantar KP/ PKL</p>"
                                "<p>&nbsp;</p>"
                                "<p>Instansi / Perusahaan&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; : "+inst+"</p>"
                                "<p>&nbsp;</p>"
                                "<p><em><u>Isian berikut untuk pengantar KP/TA</u></em></p>"
                                "<p>Judul Penelitian&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; : "+judul+"</p>"
                                "<p>Jangka Waktu Penelitian&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; : "+waktu_mulai+" - "+waktu_end+"</p>"
                                "<p>&nbsp;</p>"
                                "<p style='text-align: center;'>Bangkalan , "+waktu_pengajuan+"</p>"
                                "<p style='text-align: left;'>&nbsp;</p>"
                                "<p style='text-align: left;'>&nbsp; &nbsp; &nbsp; Menyetujui&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Pemohon</p>"
                                "<p style='text-align: left;'>Koordinator KP/TA</p>"
                                "<p style='text-align: left;'>&nbsp;</p>"
                                "<p style='text-align: left;'>&nbsp;</p>"
                                "<p style='text-align: left;'>............................&nbsp; &nbsp; &nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; "+nama+"</p>"
                                "<p style='text-align: left;'>(NIP)&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;  &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;(NIM): "+nim+"</p>";

                        QTextDocument document;
                        document.setHtml(tamplate);
                        QPrinter printer(QPrinter::PrinterResolution);
                        printer.setOutputFormat(QPrinter::PdfFormat);
                        printer.setOutputFileName(path+"/"+nama+nim+".pdf");
                        document.print(&printer);
                        QMessageBox::information(this,"Info","Surat Berhasil Dicetak");
                    }


                }
            }
        }
    }
}


void Home::on_logout_clicked()
{
    QMessageBox msgBox;
    msgBox.setWindowTitle("Logout");
    msgBox.setIcon(QMessageBox::Information);
    msgBox.setText("What do you want to logout?");
    QPushButton *ok = msgBox.addButton(tr("Ok"), QMessageBox::ActionRole);
    msgBox.setStandardButtons(QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Cancel);
    msgBox.exec();

    if(msgBox.clickedButton()==ok){
                main = new MainWindow();
                this->hide();
                this->close();
                main->show();
    }else{
        msgBox.close();
    }
}


void Home::on_uploadlink_clicked()
{
    UploadLink uploadlink;
    uploadlink.setData(user);
    uploadlink.exec();
}


void Home::on_carimahasiswa_textChanged(const QString &arg1)
{
    QString cari = arg1;
    qDebug() << cari;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");
    if(db.open()){
        QSqlQuery q;
        QSqlQueryModel *model = new QSqlQueryModel;
        q.prepare("SELECT nim,nama,dosenp,perusahaan,waktupengajuan,upload,nilai from surat where nim like '%"+cari+"%'");
        q.exec();
        model->setQuery(q);
        ui->nilaimahasiswa->setModel(model);
        ui->nilaimahasiswa->horizontalHeader()->setStretchLastSection(true);
    }
}


void Home::on_nilaimahasiswa_doubleClicked(const QModelIndex &index)
{
//    QAbstractTableModel *model;
//    qDebug() << index.column();
    int kolomtanggal = 4;
    int kolomnim = 0;
    int baris = index.row();
    QModelIndex nimmhs  = index.sibling(baris,kolomnim);
    QModelIndex tanggal = index.sibling(baris,kolomtanggal);
//    qDebug() << index.model()->data(test,0);
    QString datanim = index.model()->data(nimmhs,0).toString();
    QString datatanggal = index.model()->data(tanggal,0).toString();
    QList<QString> data ;
    data.append(datanim);
    data.append(datatanggal);

    AddNilai nilai;
    nilai.setData(data);
    nilai.exec();
}

