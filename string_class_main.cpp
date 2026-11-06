/*=======================*/
//Main.cpp
/*=======================*/
#include<iostream>
#include"string_class.h"
using namespace std;
int main(){
    String str1("Object"),str2("Oriented"),str3{str1};
    
    
   cout<<str1<< "\t" << str2 << "\t"<<  str3 << endl;
return 0;

}