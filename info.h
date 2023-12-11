// info.h
#ifndef INFO_H
#define INFO_H

#include <QString>

class Info
{
private:
    QString azharInfo = "C:/Users/zin-n/Documents/LastVersion/azhar.txt";

public:
    Info();
    QString getAzharInfo() const; // Make it public
};

#endif // INFO_H
