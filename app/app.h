#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <iostream>
#include <sstream>

unsigned int sum_digits(std::string string) {
	unsigned int cnt = 0;
	for (int i = 0; i < string.size(); i++) {
		if (isdigit(i)) {
			cnt++;
		}
	}
	return cnt;
}

unsigned int visible_towers(const uint32_t arr[], int size) {
	unsigned int cnt = 0;
	for (int i = 1; i < size; i++) {
		int index = 0;
		uint32_t temp = arr[index];
		if (temp < arr[i]) cnt++;
		index++;
	}
	return cnt;
}

class operating_system {
public:
	virtual std::string release() const= 0;
	virtual std::string build() const = 0;
	virtual int space() const = 0;
};

class windows : public operating_system {
	virtual std::string release() const override { return "22H2"; };
	virtual std::string build() const override { return "10.0.22621.819"; };
	virtual int space() const override { return 25; };
};

class string {
	char* mStr;
public:
	string(const char* text);
	~string() { delete[] mStr; };
	unsigned int length() const;
	string rev_sub(int a, int b) const;
	void print(std::stringstream& ss) const;
};
