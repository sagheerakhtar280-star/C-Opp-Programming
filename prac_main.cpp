/*===========================*/
// Main  file
/*============================*/

#include<iostream>
#include"prac.h"
using namespace std;

int main(){
    Number obj1(3),obj2(5),obj4(obj2);
   
    Number obj3 = obj1+obj2;
    
    Number obj5 = obj3*obj2;
    Number obj6 = obj4- obj1;
   cout<<obj3<<endl;
   cout<<obj5<<endl;
   cout<<obj6<<endl;

}
