#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <iostream>



unsigned sum_digits(std::string s);

unsigned visible_towers(const uint32_t* niz, int size);

int operator "" _GB(unsigned long long int broj);


class operating_system {
public:
	virtual std::string release() const  = 0;
	virtual std::string build() const = 0;
	virtual int space() const = 0;
	virtual ~operating_system() = default;
};

class windows : public operating_system {
public:
	std::string release() const ;
	std::string build() const ;
	int space() const ;
};

class string {
	std::string s1;
	int size;
public:
	string(std::string s);
	string(const string& s);
	unsigned length() const;
	string rev_sub(int start, int duljina) const;
	void print(std::ostream& s) const;
};