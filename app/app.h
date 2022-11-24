#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <iostream>

unsigned sum_digits(std::string s);




int operator""_GB(unsigned long long int n);
class operating_system{
    
    public:
           virtual std::string release()const=0;
           virtual std::string build()const=0;
           virtual int space()const=0;
           virtual ~operating_system()=default;

    
};

class windows:public operating_system{

        public:
            std::string release()const override;
            std::string build()const override;
            int space()const override;



};

class string{
    char* s;
    int size;
    public:
     string(const char* c);
     string(const string& other);
     ~string();
     unsigned length();
     string& rev_sub(int a,int b);
     void print(std::ostream& ss);


};