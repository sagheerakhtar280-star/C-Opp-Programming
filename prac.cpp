/*===========================*/
// Cpp file
/*============================*/
#include"prac.h"
#include<iostream>
using namespace std;
int Number::getval()const{
    return val;
}
 
Number::Number(const int n){
    val = n;
}
Number Number::operator+(Number& n){
       Number temp(val+n.val);
       return temp;
}
Number Number::operator * (Number& n){
    Number temp(val * n.val);
    return temp;
}
Number Number::operator-(Number& n){
    Number temp(val - n.val);
    return temp;
}

ostream& operator<<(ostream&out,Number& obj){
    out<<obj.getval();
   
    return out;
}

