//Roll.No:  19CS30022
//Name   : Kamal Swami
#include <iostream>
#include <string>
using namespace std;
#ifndef _BOOKINGCLASS_H
#define _BOOKINGCLASS_H


class BookingClass{
    public:
    string Name;
    float FairLoacFactor;
    string bs;
    string AC;
    int Tiers;
    string lo;
    BookingClass(string name, float flf, string bs, string AC, int Tiers, string lom);
    BookingClass();
    ~BookingClass();
    friend ostream& operator<<(ostream&os, const BookingClass& b);
};

class ACFirstClass : public BookingClass{
    public:
    static BookingClass Type();
    ACFirstClass();
    ~ACFirstClass();
};

class AC2Tier : public BookingClass{
    public:
    static BookingClass Type();
};

class FirstClass : public BookingClass{
    public:
    static BookingClass Type();
};

class AC3Tier : public BookingClass{
    public:
    static BookingClass Type();
};

class ACChairCar : public BookingClass{
    public:
    static BookingClass Type();
};

class Sleeper : public BookingClass{
    public:
    static BookingClass Type();
};

class SecondSitting : public BookingClass{
    public:
    static BookingClass Type();
};

#endif