#ifndef num_h
#define num_h
#include<iostream>
using namespace std;
class Number{
    int val{};
    public:
    Number(const int n);
    Number(const int& n);
    int getstr()const;
    ~Number();
};

#endif
ostream& operator+(ostream& obj);
ostream& operator<<(ostream&out, Number& obj);