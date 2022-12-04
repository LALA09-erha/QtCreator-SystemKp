#ifndef HOMEE_H
#define HOMEE_H

#include <QDialog>
#include <QtSql>

QT_BEGIN_NAMESPACE
namespace Ui { class Home; }
QT_END_NAMESPACE


namespace Ui {
class Homee;
}

class Homee : public QDialog
{
    Q_OBJECT

public:
    explicit Homee(QWidget *parent = nullptr);
    ~Homee();
    void setData(const QString &labelText);


private:
    Ui::Homee *ui;
    QString user;
    QSqlDatabase db;
};



#endif // HOMEE_H
