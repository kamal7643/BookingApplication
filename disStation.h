//Roll.No:  19CS30022
//Name   : Kamal Swami
#include <iostream>
#include "Station.h"
using namespace std;
#ifndef _DISSTATION_H
#define _DISSTATION_H

class disStation{
    public:
    Station start;
    Station end;
    int dist;
    disStation(Station s1, Station s2, int d);
    ~disStation();
    friend ostream& operator<<(ostream& o, const disStation& out);
};

#endif