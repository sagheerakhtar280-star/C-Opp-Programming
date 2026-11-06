#include<iostream>
using namespace std;
class student{
    char*name;
    int rollNo{};
    public:
    student(const char*,int);
    ~student();
};
  ostream&operator<<(ostream&out,student& obj){
    out<<obj.name;
    return out;
  }

  student::student(const char* n,int r){
    rollNo = r;
    name = new char[10];
    for(int i{};i<3;i++){
      name[i] = n[i];
    }
  }
   
  int main(){
  student ob("ali",10);
  }
