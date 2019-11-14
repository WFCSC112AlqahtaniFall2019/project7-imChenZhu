//
// Created by 朱宸 on 2019/11/14.
//

#include<iostream>
#include "Data.h"

using namespace std;

Data::Data(){
    rankP = 0;
    nameP = "";
    salesP = 0;
    yearP =  0;
}
Data::Data(double rank, string name, double sales, int year) {
    rankP = rank;
    nameP = name;
    salesP = sales;
    yearP = year;
}
const ostream& operator<<( ostream &os, Data d) {
    os << d.nameP << ", Year: " << d.yearP << " Rank: " << d.rankP << " Sales: " << d.salesP << endl;
    return os;
}
bool Data::operator<(Data &rhs) {
    return this->yearP < rhs.yearP;
}

bool Data::operator>(Data &rhs) {
    return this->yearP > rhs.yearP;
}