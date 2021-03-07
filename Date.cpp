//Roll.No:  19CS30022
//Name   : Kamal Swami
#include <iostream>
#include "Date.h"
using namespace std;

Date::Date(int a, int b, int c){
    day=a;
    switch (b)
    {
    case 1: smonth="Jan";
        break;

    case 2: smonth="Feb";
        break;
    
    case 3: smonth="Mar";
        break;
    
    case 4: smonth="Apr";
        break;
    
    case 5: smonth="May";
        break;
    
    case 6: smonth="Jun";
        break;
    
    case 7: smonth="Jul";
        break;
    
    case 8: smonth="Aug";
        break;
    
    case 9: smonth="Sep";
        break;
    
    case 10: smonth="Oct";
        break;
    
    case 11: smonth="Nov";
        break;
    
    case 12: smonth="Dec";
        break;
    
    default:
        break;
    };
    year=c;
}

Date::Date(){}

Date::~Date(){}

bool Date::operator==(const Date& d){
    if((day==d.day)&&(smonth==d.smonth)&&(year==d.year))return true;
    return false;
}
ostream& operator<< (ostream& os,const Date& d){
    os << d.day << "/" << d.smonth << "/" << d.year;
    return os;
}
