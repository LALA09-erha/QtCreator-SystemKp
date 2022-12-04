#ifndef REGIST_H
#define REGIST_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class Regist;
}

class Regist : public QDialog
{
    Q_OBJECT

public:
    explicit Regist(QWidget *parent = nullptr);
    ~Regist();

private slots:
    void on_toolButton_clicked();

    void on_regist_clicked();

private:
    Ui::Regist *ui;
    QMainWindow *main;
    QSqlDatabase db;

};

#endif // REGIST_H
