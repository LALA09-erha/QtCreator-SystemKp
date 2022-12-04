#ifndef ADDINFO_H
#define ADDINFO_H

#include <QDialog>
#include <QtSql>

namespace Ui {
class AddInfo;
}

class AddInfo : public QDialog
{
    Q_OBJECT

public:
    explicit AddInfo(QWidget *parent = nullptr);
    ~AddInfo();
    void setData();


private slots:
    void on_add_clicked();

    void on_cancel_clicked();

private:
    Ui::AddInfo *ui;
    QSqlDatabase db;

};

#endif // ADDINFO_H
