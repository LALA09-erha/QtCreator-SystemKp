#ifndef DAFTARKP_H
#define DAFTARKP_H

#include <QDialog>
#include <QtSql>
#include "home.h"

namespace Ui {
class DaftarKp;
}

class DaftarKp : public QDialog
{
    Q_OBJECT

public:
    explicit DaftarKp(QWidget *parent = nullptr);
    ~DaftarKp();
    void setData(const QString &user);

private slots:

    void on_Tdaftar_clicked();

private:
    Ui::DaftarKp *ui;
    QSqlDatabase db;
    QString userr;

};

#endif // DAFTARKP_H
