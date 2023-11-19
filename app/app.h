#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <iostream>

uint32_t sum_digits(const std::string& unos);

uint32_t visible_towers(const uint32_t tornjevi[], int size_of);

int operator "" _GB(unsigned long long mem);

class operating_system {
public:
	virtual std::string release() const = 0;
	virtual std::string build() const = 0;
	virtual int space() const = 0;
	virtual ~operating_system() = default;
};

class windows : public operating_system {
public:
	windows();
	std::string release() const;
	std::string build() const;
	int space() const;
};

class string {
private:
	uint32_t size;
	char* vrijednost;

public:
	string(const char* s);
	string(const string&);
	~string();

	uint32_t length() const;
	string rev_sub(int start, int len) const;
	void print(std::ostream& os) const;
};