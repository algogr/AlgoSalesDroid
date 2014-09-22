#ifndef CUSTOMERTRANSACTION_H
#define CUSTOMERTRANSACTION_H

#include <QObject>

class CustomerTransaction : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString id READ id WRITE setId )
    Q_PROPERTY(QString cusid READ cusid WRITE setCusid )
    Q_PROPERTY(QString trndate READ trndate WRITE setTrndate)
    Q_PROPERTY(QString tradecode READ tradecode WRITE setTradecode )
    Q_PROPERTY(int isdebit READ isdebit WRITE setIsdebit )
    Q_PROPERTY(int iscredit READ iscredit WRITE setIscredit )
    Q_PROPERTY(float netvalue READ netvalue WRITE setNetvalue )
    Q_PROPERTY(float vatamount READ vatamount WRITE setVatamount )
    Q_PROPERTY(float totalamount READ totalamount WRITE setTotalamount )
    Q_PROPERTY(float debit READ debit WRITE setDebit )
    Q_PROPERTY(float credit READ credit WRITE setCredit )
    Q_PROPERTY(float balance READ balance WRITE setBalance )
    Q_PROPERTY(float totalamount READ totalamount WRITE setTotalamount )
    Q_PROPERTY(QString ftrid READ ftrid WRITE setFtrid )
    Q_PROPERTY(QString cuscode READ cuscode WRITE setCuscode )
public:
    explicit CustomerTransaction(QObject *parent = 0);
    QString id();
    void setId(QString id);
    QString cusid();
    void setCusid(QString cusid);
    QString trndate();
    void setTrndate(QString trndate);
    QString tradecode();
    void setTradecode(QString tradecode);
    int isdebit();
    void setIsdebit(int isdebit);
    int iscredit();
    void setIscredit(int iscredit);
    float netvalue();
    void setNetvalue(float netvalue);
    float vatamount();
    void setVatamount(float vatamount);
    float totalamount();
    void setTotalamount(float totalamount);
    float debit();
    void setDebit(float debit);
    float credit();
    void setCredit(float credit);
    float balance();
    void setBalance(float balance);
    QString ftrid();
    void setFtrid(QString ftrid);
    QString cuscode();
    void setCuscode(QString cuscode);

signals:

public slots:

private:
    QString mid;
    QString mcusid;
    QString mtrndate;
    QString mtradecode;
    int misdebit;
    int miscredit;
    float mnetvalue;
    float mvatamount;
    float mtotalamount;
    float mdebit;
    float mcredit;
    float mbalance;
    QString mftrid;
    QString mcuscode;

};

#endif // CUSTOMERTRANSACTION_H
