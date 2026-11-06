/*======================*/
// Header file
/*======================*/
#ifndef string_class_h
#define string_class_h
#include<iostream>
using namespace std;
class String{
    private:
    char*str{};
    
    public:
    String(const char* s);
    String(const String& s);
    const char* getstr()const;
    int length(const char* s);
      
    ~String(){
        delete[]str;
    }
    
       
   
};

#endif
 ostream &operator<<(ostream&out,String &str1);