#ifndef ADDNILAI_H
#define ADDNILAI_H

#include <QDialog>
#include <QtSql>
#include "home.h"

namespace Ui {
class AddNilai;
}

class AddNilai : public QDialog
{
    Q_OBJECT

public:
    explicit AddNilai(QWidget *parent = nullptr);
    ~AddNilai();
    void setData(const QList<QString> &user);


private slots:
    void on_pushButton_clicked();

private:
    Ui::AddNilai *ui;
    QSqlDatabase db;
    QString userr;
    QString tanggal;
};

#endif // ADDNILAI_H
