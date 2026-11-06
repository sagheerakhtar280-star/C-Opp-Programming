#include<iostream>
using namespace std;
class customer{
  private:
  //int width{};
 // int length{};
  const int size{};
  char*str{};
 




 public:

 
 /*customer(){
    cout<<"Constructor automatically called at the time of object creation"<<endl;
  }
  customer(int w,int l){
    width = w;
    length = l;
  }
  int getwidth()const{
    return width;
  }
  int getlength(){
    return length;
  }
*/
};
istream&operator>>(istream&in,customer&n){
  in>>n.str;

}
  ostream&operator<<(ostream&out,customer&n){
    out<<n.str;
    return out;
  }
 void display(){
  char*str = new char[size];
  for(int i {};i<size;i++){
    cin>>str[i];
  }
    for(int i {};i<size;i++){
    cout<<str[i];
  }
}
int main(){
  int size;

  cout<<"Enter the size:";
  cin>>size;

    customer c1,s1(5,10);customer s2(3);
  
    
    //cout<<"width is "<<s1.getwidth()<<endl;
   // cout<<"Length is:"<<s1.getlength()<<endl;
    cout<<"String is:"<<display()<<endl;
}