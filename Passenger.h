//Roll.No:  19CS30022
//Name   : Kamal Swami
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;
#ifndef _PASSENGER_H
#define _PASSENGER_H


class Passenger{
    public:
    string name;
    string aadhar;
    Date dateOfBirth;
    string gender;
    string mobile;
    string category;
    Passenger(string name, string aadhar, Date dob, string gender, string mobile, string category);
    Passenger();
    ~Passenger();
    friend ostream& operator<< (ostream& os, Passenger& p); 
};
#endif