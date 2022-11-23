#include "app.h"
#include <string.h>


unsigned sum_digits(std::string s){
    unsigned a=0;
    for(int i=0;i<s.length();++i)
       if(isdigit(s[i]))a+= s[i]-'0';
       
    
    return a;

}
    int operator""_GB(unsigned long long int n){return n;}
   
    std::string windows::release()const{return "22H2";}
    std::string windows::build()const{return "10.0.22621.819";}
    int windows::space()const{return 25_GB;}


    string::string(const char* c):s{new char[size]},size{strlen(c)}{
        for(int i=0;i<size;++i)s[i]=c[i];
    }
    unsigned string::length(){
        strlen(s);
    }
    string::~string(){
        delete[] s;
        s=nullptr;
    }
    string::string(const string& other):s{new char[size]},size{strlen(other.s)}{
        for(int i=0;i<size;++i)other.s[i]=s[i];
    }
    string& string::rev_sub(int a,int b){
        for(int i=0;i<b;++i);


        return *this;
        
    }