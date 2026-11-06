#include<iostream>
using namespace std;
class people{
    private:
    char*name;
   
    public:
    people(const char*ne);
    people(const people&ne);   //
    int length(const char* ne){
        int ln{};
        while(ne[ln]!= '\0'){
            ln++;
        }
       return ln;
    }
    ~people(){
        delete[]name ;
    }
       void display(){
        cout<<name;
    }

};
  people::people(const char* ne){
    
    name = new char[length(ne)+1];
    for(int i{};i<=length(ne);i++){
        name[i] = ne[i];
    }
 
       
  }
   people::people(const people&ne){ //
    
    name = new char[length(ne.name)+1];
    for(int i{};i<=length(ne.name);i++){    //
        name[i] = ne.name[i];
    }
 
       
  }
  int main(){
    people obj("objectOrientedProgram");
    people s1{obj};
    obj.display();
    cout<<endl;       
    s1.display();
  }