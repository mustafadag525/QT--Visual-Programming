#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QMessageBox>
QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();


private slots:
    void on_btnYeni_clicked();

    void on_btnOku_clicked();

    void on_btnKaydet_clicked();



    void on_txtmetin_textChanged();

private:
    Ui::Dialog *ui;

    bool m_saved;
    bool kaydet();
    bool oku();




    // QWidget interface
protected:
    void closeEvent(QCloseEvent *event);
};
#endif // DIALOG_H
