/*================================*/
// Header file
/*================================*/
#ifndef prac_h
#define prac_h
#include<iostream>
using namespace std;
class Number{
    private:
    int val{};
    public:
    
    int getval()const;
   Number(const int n);
    Number operator+(Number& n);
   Number operator*(Number& n);
   Number operator-(Number& n);
};
ostream& operator<<(ostream&out, Number& obj);
#endif

