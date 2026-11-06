#include<iostream>
using namespace std;
class Name{
    char*na;
    public:
    
    Name(const char *n){ 
     int length{};
     while(n[length]!='\0'){
        length++;
     }
     na = new char[length+1];
     for(int i{};i<=length;i++){
      na[i] = n[i];
     }

    
    }
    ~Name(){
        delete[]na;
    }
    void display(){
        cout<<na;
    }
};



int main(){
    Name s1("sagheerakhtar");
    s1.display();
}