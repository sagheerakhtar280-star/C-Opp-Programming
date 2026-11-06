#include"num.h"
#include<iostream>
using namespace std;
Number::Number(const int* n){
    num = n;
}
Number::Number(const obj& n){
    num = obj.n;
}
int Number:: getstr(){
    return num;
}
Number::Number operator+(Number obj){
    obj3 = obj+obj1;
}
ostream& operator<<(ostream& out,Number& obj){
    out<<obj.getstr();
    return out;
}

