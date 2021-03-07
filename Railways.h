//Roll.No:  19CS30022
//Name   : Kamal Swami
#include <iostream>
#include <string>
#include "Station.h"
#include "disStation.h"
#include "Booking.h"
#include <vector>
using namespace std;
#ifndef _RAILWAYS_H
#define _RAILWAYS_H

class Railways{
    public:
    string name;
    vector<Station> sStation;
    vector<disStation> sDisStation;
    Railways(string input);
    ~Railways();
    void Reload();
    friend ostream& operator<<(ostream& o, const Railways& out);
};
#endif