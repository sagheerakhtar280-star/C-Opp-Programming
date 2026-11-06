// Cpp file
#include"string.h"
#include<iostream>
using namespace std;
 String:: String(const char*tl){
    title = new char[length(tl)+1];
    for(int i{};i<=length(tl);i++){
        title[i] = tl[i];
    }
}