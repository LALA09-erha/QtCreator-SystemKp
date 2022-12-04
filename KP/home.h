#ifndef HOME_H
#define HOME_H

#include <QDialog>
#include <QtSql>
#include "editinfo.h"
#include "addinfo.h"
#include "addadmin.h"
#include "daftarkp.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Home; }
QT_END_NAMESPACE


namespace Ui {
class Home;
}

class Home : public QDialog
{
    Q_OBJECT

public:
    explicit Home(QWidget *parent = nullptr);
    ~Home();
    void setData(const QString &labelText);
    void viewData(const QString &labelText);

private slots:
    void on_awal_tabBarClicked(int index);

    void on_viewinfo_doubleClicked(const QModelIndex &index);

    void on_refr_clicked();

    void on_pushButton_2_clicked();

    void on_viewadmin_doubleClicked(const QModelIndex &index);

    void on_addadmin_clicked();

    void on_refradmin_clicked();

    void on_username_user_textChanged(const QString &arg1);

    void on_save_clicked();

    void on_password_user_textChanged(const QString &arg1);

    void on_awal_currentChanged(int index);

    void on_nama_user_textChanged(const QString &arg1);

    void on_alamat_user_textChanged(const QString &arg1);

    void on_sks_valueChanged(int arg1);

    void on_tombolAwal_clicked();

private:
    Ui::Home *ui;
    QString user;
    QSqlDatabase db;

};

#endif // HOME_H
