#ifndef EDITINFO_H
#define EDITINFO_H

#include <QDialog>
#include <QtSql>
#include "home.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Home; }
QT_END_NAMESPACE

namespace Ui {
class EditInfo;
}

class EditInfo : public QDialog
{
    Q_OBJECT

public:
    explicit EditInfo(QWidget *parent = nullptr);
    ~EditInfo();
    void setData(const QStringList &labelText);

private slots:
    void on_update_clicked();

    void on_cancel_clicked();

private:
    Ui::EditInfo *ui;
    QString user;
    QSqlDatabase db;

};

#endif // EDITINFO_H
