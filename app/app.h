#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <iostream>

uint32_t sum_digits(std::string x);

uint32_t visible_towers(const uint32_t* arr, uint32_t x);

double operator "" _GB(unsigned long long n);

class operating_system {
	public:
		~operating_system();
		std::string virtual release() const = 0;
		std::string virtual build() const = 0;
		double virtual space() const = 0;
	};

class windows :public operating_system {
public:
	std::string release() const override;
	std::string build() const override;
	double space() const override;
};

class string {
	char* arr;
	uint32_t len;
public:
	string(const char* val);
	string(const string& other);
	string(string&& other);
	~string();

	string& rev_sub(uint32_t start, uint32_t n) const;
	uint32_t length() const;
	void print(std::ostream& ss) const;

};
