#include "app.h"


uint32_t sum_digits(std::string x) {
	uint32_t sum = 0;
	for (uint32_t i = 0; i < x.length(); ++i) {
		if (isdigit(x[i])) sum += x[i]-'0';
	}
	return sum;
}

uint32_t visible_towers(const uint32_t* arr, uint32_t x) {
	uint32_t visible = 1;
	uint32_t highest = arr[0];
	for (uint32_t i = 0; i < x; i++) {
		if (arr[i] > highest) {
			visible++;
			highest = arr[i];
		}
	}
	return visible;
}

double operator "" _GB(unsigned long long n) {
	return n/1000;
}

operating_system::~operating_system() {
}

std::string windows::release() const {
	return "22H2";
}

std::string windows::build() const {
	return "10.0.22621.819";
}

double windows::space() const {
	return 25_GB;
}

string::string(const char* val)
{
	if (val == nullptr) {
		arr = new char[1];
	}

	else {
		val = new char[strlen(arr) + 1];
		strcpy(arr, val);
	}
}

string::string(const string& other)
{
	len = other.len;
	arr = new char[strlen(other.arr) + 1];
	strcpy(arr, other.arr);
}

string::string(string&& other)
{
	len = other.len;
	arr = other.arr;
	other.arr = nullptr;
}

string::~string() {
	delete[] arr;
	arr = nullptr;
}

uint32_t string::length() const {
	return len;
}

string& string::rev_sub(uint32_t start, uint32_t n) const {

}

void string::print(std::ostream& ss) const {
	ss << arr;
}
