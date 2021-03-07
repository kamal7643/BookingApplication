//Roll.No:  19CS30022
//Name   : Kamal Swami
#include <iostream>
using namespace std;
#ifndef _DATE_H
#define _DATE_H

class Date{
    public:
    int day;
    int year;
    string smonth;
    Date(int a, int b, int c);
    Date();
    ~Date();
    friend ostream& operator<<(ostream& os,const Date & d);
    bool operator==(const Date& d);
};
#endif