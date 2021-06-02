#ifndef SERVER_H
#define SERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QList>

// QObject'i silip yerine   QTcpServer yazıyorum ki ondan türetilmiş bir sınıf olsun.
class Server : public QTcpServer
{
    Q_OBJECT
public:
    explicit Server(QObject *parent = nullptr);
    int count();
    void close();

    QString message() const;
    void setMessage(const QString &message);

signals:
    void changed();

public slots:
    void disConnected();
    void readyRead();



private:

    // QTcpServer interface
    QString m_message;
    QList<QTcpSocket*> m_list;

protected:


    // QTcpServer interface
protected:
    void incomingConnection(qintptr handle) override;
};


#endif // SERVER_H
