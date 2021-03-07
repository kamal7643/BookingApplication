//Roll.No:  19CS30022
//Name   : Kamal Swami
#include "Passenger.h"
#include <iostream>
using namespace std;

Passenger::Passenger(string name, string aadhar, Date dob, string gender, string mobile, string category)
{
    name=name;
    aadhar=aadhar;
    dateOfBirth=dob;
    gender=gender;
    mobile=mobile;
    category=category;
};

Passenger::Passenger(){}

Passenger::~Passenger(){}

ostream& operator<< (ostream&os, Passenger& p){
    os << "Name :" << p.name << endl << "Aadhar :" << p.aadhar << endl << "Date of Birth :" << p.dateOfBirth;
    return os;
}