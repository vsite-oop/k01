#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <iostream>


/*---------------------------------test 1------------------------------------*/
unsigned sum_digits(std::string s);



/*---------------------------------test 2------------------------------------*/

unsigned visible_towers(const unsigned list[], int num);



/*--------------------------------test 3-------------------------------------*/

int operator "" _GB(unsigned long long n);

class operating_system {
public:
	~operating_system() = default;
	virtual std::string release() const = 0;
	virtual std::string build() const =0;
	virtual int space() const = 0;
};

class windows : public operating_system {
public:
	std::string release() const override;
	std::string build() const override;
	int space() const override;
};



/*----------------------------------test 4----------------------------------*/

class string {
	char* place = 0;
	int length = 0;
public:
	string(char& string);
	~string();
	unsigned length();
	string rev_sub(int index, int len);

};