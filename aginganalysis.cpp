#include "aginganalysis.h"

AgingAnalysis::AgingAnalysis(QObject *parent) :
    QObject(parent)
{
}

QVariant AgingAnalysis::year()
{
    return myear;
}

void AgingAnalysis::setYear(QVariant year)
{
    myear=year;
}

QVariant AgingAnalysis::month()
{
    return mmonth;
}

void AgingAnalysis::setMonth(QVariant month)
{
    mmonth=month;
}

float AgingAnalysis::amount()
{
    return mamount;
}

void AgingAnalysis::setAmount(float amount)
{
    mamount=amount;
}

