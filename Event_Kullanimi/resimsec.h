#ifndef RESIMSEC_H
#define RESIMSEC_H

#include <QDialog>
#include <QDir>
#include <QFile>
#include <QFileInfo>
#include <QFileInfoList>
#include <QListWidgetItem>
namespace Ui {
class resimsec;
}

class resimsec : public QDialog
{
    Q_OBJECT

public:
    explicit resimsec(QWidget *parent = nullptr);
    ~resimsec();
    QString selected;
private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::resimsec *ui;
    void  init();
};

#endif // RESIMSEC_H
