//Roll.No:  19CS30022
//Name   : Kamal Swami
#include "Railways.h"
#include <iostream>
#include <fstream>
#include <string>
#include "Station.h"
#include "disStation.h"
using namespace std;

Railways::Railways(string input){
    name=input;
}

Railways::~Railways(){}

void Railways::Reload(){
    sStation.clear();
    sDisStation.clear();
    ifstream designFile ;
    designFile.open("..\\Documents\\Design.txt");
    if(!designFile){
        cout << "somthing went wrong with Documents\\Design.txt file" ;
        exit(1);
    }else{
        int n;
        designFile >> n;
        string s;
        getline(designFile, s);
        for (int i=0;i<n;i++){
            getline(designFile, s);
            Station temp(s);
            sStation.push_back(temp);
        }
        int numOfPair = n*(n-1)/2;
        int p=0, q=1;
        for(int i=0;i<numOfPair;i++){
            int dist ;
            designFile >> dist;
            disStation temps(sStation[p].name, sStation[q].name, dist);
            // cout << temps << endl;
            sDisStation.push_back(temps);
            if(q+1<n){
                q++;
            }else{
                p++;
                q=p+1;
            }
        }
        designFile.close();
    }
    return ;
}

ostream& operator<<(ostream& os, const Railways &f){
    os << "Name : " 
    << f.name 
    << endl 
    << "Number of stations :" 
    << f.sStation.size() 
    << endl
    << "Number of Pair Stations :"
    << f.sDisStation.size();
    return os;
}
