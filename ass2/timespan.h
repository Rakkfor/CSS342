#include <iostream>
#include <sstream>
#include <cassert>

#ifndef ASS2_TIMESPAN_H
#define ASS2_TIMESPAN_H

using namespace std;

class TimeSpan {


public:
    friend ostream &operator<<(ostream &out, const TimeSpan &time);

    TimeSpan operator<<(const TimeSpan &span) const;
    TimeSpan operator==(const TimeSpan &span) const;
    TimeSpan operator!=(const TimeSpan &span) const;
    TimeSpan operator<(const TimeSpan &span) const;
    TimeSpan operator>(const TimeSpan &span) const;
    TimeSpan operator>=(const TimeSpan &span) const;
    TimeSpan operator<=(const TimeSpan &span) const;
    TimeSpan operator+=(const TimeSpan &span) const;
    TimeSpan operator-=(const TimeSpan &span) const;
    TimeSpan operator+(const TimeSpan &span) const;
    TimeSpan operator-(const TimeSpan &span) const;
    TimeSpan operator*(const TimeSpan &span) const;



    TimeSpan(const double &hour = 0, const double &minute = 0, const double &second = 0);
    ~TimeSpan();
private:

    void Simplify (double &hour, double &minute, double &second) {

    }
};


#endif //ASS2_TIMESPAN_H
