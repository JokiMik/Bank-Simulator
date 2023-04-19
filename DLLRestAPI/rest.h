
#ifndef REST_H
#define REST_H
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QObject>


class rest:public QObject
{
    Q_OBJECT
public:
    rest(QObject * parent = nullptr);
    ~rest();


    QByteArray getHttpResponse() const;
    void setHttpResponse(const QByteArray &newHttpResponse);

    QByteArray getToken() const;
    void setToken(const QByteArray &newToken);




public slots:

    void loginAccess(QString,QString);
    void httpRequestSlot(QNetworkReply *reply);
    void LoginSlot(QNetworkReply *reply);
    void getMainWindowInfoAccess(QString);
    void getAccountHistory(QString);
    void getSaldo(QString);          //tilitapahtumaSlotti

private:
    QByteArray httpResponse;       // säilöö httpresponsen serveriltä //Tämän muutin byteArreyksi
    QNetworkAccessManager *postManager;     //lähetää post pyynnön
    QNetworkAccessManager *getManager;
    QNetworkAccessManager *getSaldoManager;
    QNetworkAccessManager *getAccountManager;//lähettää get pyynnön
    QNetworkReply *reply;       //säilöö http vastauksen
    QByteArray response_data;//muuttuja mitä säilöö response_datan
    QByteArray Token;

    short state;

    enum states
    {
        GETMANAGER,
        GETSALDOMANAGER,
        GETACCOUNTMANAGER
    };




signals:
    void httpResponseReady();
    void LoginResponseReady();


};

#endif // REST_H
