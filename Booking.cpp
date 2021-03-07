//Roll.No:  19CS30022
//Name   : Kamal Swami
#include <iostream>
#include "Booking.h"
#include "Station.h"
#include "Date.h"
using namespace std;
vector <Booking> Booking::sBookings;
int get_distance(Station s1, Station s2);

Booking::Booking(Station s1, Station s2, Date d, BookingClass itp){
    fromStation = s1;
    toStation = s2;
    date = d;
    message = "BOOKING SUCCEEDED:";
    int dis=get_distance(this->fromStation, this->toStation);
    PNR = pnr++;
    tp=itp;
    float ans;get_distance(this->fromStation, this->toStation);
    ans=dis/(2.0);
    ans *= tp.FairLoacFactor;
    if(tp.AC=="AC"){
        ans+=50.0;
    }
    if(tp.lo=="Yes"){
        ans*=1.25;
    }
    Fair = ans;
    if(ans-Fair>=(Fair+1-ans))Fair++;
    Booking::sBookings.push_back(*this);
}

Booking::Booking(){
}


Booking::~Booking(){
}

Booking& Booking::operator=(const Booking&s){
    fromStation=s.fromStation;
    toStation=s.toStation;
    date=s.date;
    message=s.message;
    PNR=s.PNR;
    Fair=s.Fair;
    return *this;
}

bool Booking::operator!=(const Booking& b){
    if(PNR==b.PNR)return true;
    else return false;
}

ostream& operator<<(ostream& os, const Booking& b){
    os << b.message 
    << endl 
    << "PNR Number :" 
    << b.PNR 
    << endl 
    << "From Station :" 
    << b.fromStation 
    << endl 
    << "To Station :" 
    << b.toStation 
    << endl 
    << "Travel Date :" 
    << b.date 
    << endl
    << "Travel Class = "
    << b.tp.Name
    << endl
    << " : Mode: "
    << b.tp.bs
    << endl
    << " : Comfort: "
    <<b.tp.AC
    << endl
    << " : Bunks: "
    << b.tp.Tiers
    << endl
    <<" : Luxury: "
    << b.tp.lo
    << endl
    << "Fair :"
    << b.Fair
    << endl << endl;
    return os;
}