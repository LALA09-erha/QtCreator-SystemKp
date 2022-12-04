#ifndef ADDADMIN_H
#define ADDADMIN_H

#include <QDialog>
#include <QtSql>
#include "home.h"

namespace Ui {
class AddAdmin;
}

class AddAdmin : public QDialog
{
    Q_OBJECT

public:
    explicit AddAdmin(QWidget *parent = nullptr);
    ~AddAdmin();


private slots:
    void on_cancel_2_clicked();

    void on_add_admin_clicked();

private:
    Ui::AddAdmin *ui;
    QSqlDatabase db;

};

#endif // ADDADMIN_H
