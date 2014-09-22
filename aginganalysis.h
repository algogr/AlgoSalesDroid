#ifndef AGINGANALYSIS_H
#define AGINGANALYSIS_H

#include <QObject>
#include <QVariant>

class AgingAnalysis : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QVariant year READ year WRITE setYear )
    Q_PROPERTY(QVariant month READ month WRITE setMonth )
    Q_PROPERTY(float amount READ amount WRITE setAmount )
public:
    explicit AgingAnalysis(QObject *parent = 0);
    QVariant year();
    void setYear(QVariant year);
    QVariant month();\
    void setMonth(QVariant month);
    float amount();
    void setAmount(float amount);

signals:

public slots:

private:
    QVariant myear;
    QVariant mmonth;
    float mamount;

};

#endif // AGINGANALYSIS_H
