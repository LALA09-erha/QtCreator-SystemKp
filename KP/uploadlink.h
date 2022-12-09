#ifndef UPLOADLINK_H
#define UPLOADLINK_H

#include <QDialog>
#include <QtSql>
#include "home.h"

namespace Ui {
class UploadLink;
}

class UploadLink : public QDialog
{
    Q_OBJECT

public:
    explicit UploadLink(QWidget *parent = nullptr);
    ~UploadLink();
    void setData(const QString &user);


private slots:
    void on_upload_clicked();

    void on_cancel_clicked();

private:
    Ui::UploadLink *ui;
    QSqlDatabase db;
    QString userr;
};

#endif // UPLOADLINK_H
