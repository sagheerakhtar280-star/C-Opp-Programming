#include<iostream>
using namespace std;
#ifndef group_h
#define group_h
class String{
    private:
  char*title;
  public:
  String(const char* tl);
  int length(const char* tl){
    int size{};
    while(tl[size]!= '\0'){
        size++;
    }
    return size;
  }
  ~String(){
    delete[]title;
  }
  void display(){
    cout<<title;
  }

};
#endif