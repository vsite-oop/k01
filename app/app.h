#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <iostream>

uint32_t sum_digits(std::string text);

uint32_t visible_towers(const uint32_t* towers, int size);

inline long long int operator ""_GB(unsigned long long int num)
{
	return num;
}

class operating_system
{
public:
	virtual ~operating_system() = default;
	virtual std::string release() const = 0;
	virtual std::string build() const = 0;
	virtual long long int space() const = 0;
};

class windows : public operating_system
{
public:
	std::string release() const override;
	std::string build() const override;
	long long int space() const override;
};

class string
{
private:
	uint32_t size;
	char* text;
public:
	string(const char* text);
	string(const string& other);
	~string();

	uint32_t length() const;
	const string rev_sub(int offset, int count) const;
	void print(std::ostream& os) const;
};