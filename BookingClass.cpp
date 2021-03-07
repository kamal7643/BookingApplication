//Roll.No:  19CS30022
//Name   : Kamal Swami
#include <iostream>
#include <string>
#include "BookingClass.h"
using namespace std;

BookingClass::BookingClass(string name, float flf, string ibs, string iAC, int iTiers, string ilo){
    Name=name;
    FairLoacFactor=flf;
    if(ibs=="Seat")bs="Sitting";
    else bs="Sleeper";
    if (iAC=="Yes")AC="AC";
    else AC="Non-AC";
    Tiers=iTiers;
    if (ilo=="Ordinary")lo="No";
    else lo = "Yes";
}

BookingClass::BookingClass(){
}

BookingClass::~BookingClass(){
}

ostream& operator<< (ostream&os, const BookingClass& b){
    os<< b.Name << b.lo;
    return os;
}

BookingClass ACFirstClass::Type(){
    BookingClass temp("AC First Class", 3.00, "Berth", "Yes", 2, "Luxury");
    return temp;
}

BookingClass AC2Tier::Type(){
    BookingClass temp("AC 2 Tier", 2.00, "Berth", "Yes", 2, "Ordinary");
    return temp;
}

BookingClass FirstClass::Type(){
    BookingClass temp("First Class", 2.00, "Berth", "No", 2, "Luxury");
    return temp;
}

BookingClass AC3Tier::Type(){
    BookingClass temp("AC 3 Tier", 1.75, "Berth", "Yes", 2, "Ordinary");
    return temp;
}

BookingClass ACChairCar::Type(){
    BookingClass temp("AC Chair Car", 1.25, "Seat", "Yes", 0, "Ordinary");
    return temp;
}

BookingClass Sleeper::Type(){
    BookingClass temp("Sleeper", 1.00, "Berth", "No", 3, "Ordinary");
    return temp;
}

BookingClass SecondSitting::Type(){
    BookingClass temp("Second Sitting", 0.50, "Seat", "No", 0, "Ordinary");
    return temp;
}