#ifndef DATE_H
#define DATE_H

#include <string>

class Date {
private:
    int month, day, year;

public:
    Date();
    void init(const std::string& dateStr);
    void printDate() const;
};

#endif