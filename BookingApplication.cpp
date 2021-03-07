//Roll.No:  19CS30022
//Name   : Kamal Swami
#include <iostream>
#include "Railways.h"
#include "Station.h"
#include "BookingClass.h"
using namespace std;
static Railways indr("Indian Railways");
void BookingApplication()
{
    indr.Reload();
    Booking b1(Station("Mumbai"), Station("Delhi"), Date(15, 2, 2021), ACFirstClass::Type());
    Booking b2(Station("Kolkata"), Station("Delhi"), Date(5, 3, 2021), AC2Tier::Type());
    Booking b3(Station("Mumbai"), Station("Kolkata"), Date(17, 3, 2021), FirstClass::Type());
    Booking b4(Station("Mumbai"), Station("Delhi"), Date(23, 3, 2021), AC3Tier::Type());
    Booking b5(Station("Chennai"), Station("Delhi"), Date(25, 4, 2021), ACChairCar::Type());
    Booking b6(Station("Chennai"), Station("Kolkata"), Date(7, 5, 2021), Sleeper::Type());
    Booking b7(Station("Mumbai"), Station("Delhi"), Date(19, 5, 2021), SecondSitting::Type());
    Booking b8(Station("Delhi"), Station("Mumbai"), Date(22, 5, 2021), SecondSitting::Type());
    vector<Booking >::iterator it;
    for (it = Booking::sBookings.begin(); it != Booking::sBookings.end(); ++it)
    {
        cout << (*it);
    }
    
}

int get_distance(Station s1, Station s2){
    int i=0;
    while(true){
        if((indr.sDisStation[i].start==s1 && indr.sDisStation[i].end==s2) || (indr.sDisStation[i].start==s2 && indr.sDisStation[i].end==s1)){
            return indr.sDisStation[i].dist;
        }else{
            if(i+1<indr.sDisStation.size()){
                i++;
            }else{
                return -99999;
            }
        }
    }
}