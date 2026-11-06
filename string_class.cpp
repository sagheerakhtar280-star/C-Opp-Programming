/*======================*/
// String.cpp
/*======================*/
#include"string_class.h"
#include<iostream>
using namespace std;
    int String:: length(const char* s){
        int size{};
        while(s[size]!= '\0'){
            size++;
        }
        return size;
    }
String::String(const char* s){
    str = new char[length(s)+1];
    for(int i{};i<=length(s);i++){
        str[i] = s[i];
    }
}
    String::String(const String& s){
        str = new char[length(s.str)+1];
        for(int i{};i<=length(s.str);i++){
            str[i] = s.str[i];
        }
    }
    const char* String::getstr()const{
        return str;
    }
     ostream &operator<<(ostream&out,String &str1){
        out<< str1.getstr();
        return out;
     }
  


   