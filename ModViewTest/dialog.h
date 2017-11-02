#ifndef DIALOG_H
#define DIALOG_H

#include <QtCore>
#include <QtGui>
#include <QDialog>

namespace Ui {
    class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    Ui::Dialog *ui;
    QStringListModel *model;

private slots:
    void on_pushButton_3_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
};

#endif // DIALOG_H
