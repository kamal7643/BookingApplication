//Roll.No:  19CS30022
//Name   : Kamal Swami
#include <iostream>
#include "Station.h"
#include "Date.h"
#include "Bookingclass.h"
#include "Passenger.h"
#include <vector>
#include <string>
using namespace std;
#ifndef _BOOKING_H
#define _BooKING_H

static int pnr =1;
class Booking{
    public:
    Station fromStation;
    Station toStation;
    Date date;
    BookingClass tp;
    Passenger person;
    int PNR;
    string message;
    int Fair;
    static vector<Booking> sBookings;
    Booking(Station s1, Station s2, Date d, BookingClass tp);
    Booking(); 
    ~Booking();
    friend ostream& operator<<(ostream& os, const Booking& s);
    Booking& operator=(const Booking&s);
    bool operator!=(const Booking& b);
};

#endif