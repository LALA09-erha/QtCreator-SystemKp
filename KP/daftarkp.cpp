#include "daftarkp.h"
#include "ui_daftarkp.h"
#include <QDebug>
#include <QMessageBox>

DaftarKp::DaftarKp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DaftarKp)
{
    ui->setupUi(this);
}

DaftarKp::~DaftarKp()
{
    delete ui;
}

void DaftarKp::setData(const QString &user){
    userr = user;
    ui->nim->setText(user);

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");

    // ambil data nama di detail_mahasiswa
    if(db.open()){
        QSqlQuery q;
        if(q.exec("select * from detail_mahasiswa where id_mhs='"+user+"'")){
            if(q.next()){
                ui->nama->setText(q.value(1).toString());
            }
        }
    }
    ui->nim->setReadOnly(true);
    ui->nama->setReadOnly(true);
    ui->mulai->setDisplayFormat("dd/MM/yyyy");
    ui->akhir->setDisplayFormat("dd/MM/yyyy");

}


void DaftarKp::on_Tdaftar_clicked()
{
    QString nama = ui->nama->text();
    QString nim = ui->nim->text();
    QString jurusan = ui->jurusan->text();
    QString dosen = ui->dosen->text();
    QString perusahaan = ui->perusahaan->text();
    QString judul = ui->judul->text();
    QString tmulai = ui->mulai->text();
    QString takhir = ui->akhir->text();
    QDateTime timestamp = QDateTime::currentDateTime();
    timestamp.addDays(1);



    //insert into database
    if(nama=="" || nim=="" || jurusan=="" || dosen==""|| perusahaan==""||judul==""){
       QMessageBox::warning(this,"Warning","Harap Mengisi Semua Kolom!");

    }else{
        if(tmulai >= takhir){
            QMessageBox::warning(this,"Warning","Jangka Waktu Tidak Valid!");
        }else
        {
            db = QSqlDatabase::addDatabase("QSQLITE");
            db.setDatabaseName("D:/SteamLibrary/steamapps/Qt/db/mydb.db");

            if(db.open()){
                QSqlQuery q;
                if(q.exec("insert into surat values('"+nim+"','"+nama+"','"+jurusan+"','"+dosen+"','"+perusahaan+"','"+judul+"','"+tmulai+"','"+takhir+"','"+ timestamp.toString("dd/MM/yyyy")+"')")){
                    QMessageBox::information(this,"Info","Pendaftaran Berhasil");
                    Home home;
                    home.setData(nim);
                    this->hide();
                    this->close();
                }else{
                    QMessageBox::information(this,"Info","Pendaftaran Gagal!");
                    this->hide();
                    this->close();
                }
            }
        }

    }

//    // Qt::ISODate format.../*
//    qDebug() << timestamp.toString("dd/MM/yyyy");
//    qDebug() <<  nama+" " + nim+" " + jurusan+" " + dosen+" " +perusahaan+" " +dosen+" " +judul+" " +tmulai+" " +takhir;*/

}

