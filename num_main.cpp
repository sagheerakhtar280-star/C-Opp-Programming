#include<iostream>
#include"num.h"
using namespace std;
int main(){
    Number obj(12),obj1{obj},obj3;
    obj3 = obj+obj1;
    cout<<obj3;
}