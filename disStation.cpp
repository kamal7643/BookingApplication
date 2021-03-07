//Roll.No:  19CS30022
//Name   : Kamal Swami
#include "disStation.h"
#include "Station.h"
#include <iostream>
using namespace std;

disStation::disStation(Station s1, Station s2, int d){
    start = s1;
    end = s2;
    dist = d;
}

disStation::~disStation(){}

ostream& operator<<(ostream& os, const disStation& s){
    os << "Start :" << s.start << "end :" << s.end << "distance :" << s.dist;
    return os;
}