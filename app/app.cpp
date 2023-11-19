#include "app.h"

uint32_t sum_digits(const std::string& unos) {
	uint32_t sum = 0;
	for (char v : unos) {
		if (isdigit(v)) {
			sum += v - '0';
		}
	}
	return sum;
}

uint32_t visible_towers(const uint32_t tornjevi[], int size_of) {
	uint32_t max = tornjevi[0];
	uint32_t n_visible = 1;
	for (uint32_t i = 0; i < size_of; i++) {
		if (max < tornjevi[i]) {
			max = tornjevi[i];
			n_visible++;
		}
	}
	return n_visible;
}

int operator "" _GB(unsigned long long mem) {
	return mem;
}

windows::windows() {};

std::string windows::release() const {
	return "22H2";
}

std::string windows::build() const {
	return "10.0.22621.819";
}

int windows::space() const {
	return 25_GB;
}

string::string(const char* s) {
	size = strlen(s);
	vrijednost = new char[size + 1];
	strcpy(vrijednost, s);
}

string::string(const string& other) {
	size = other.size;
	vrijednost = new char[size + 1];
	strcpy(vrijednost, other.vrijednost);
}

string::~string() {
	delete[] vrijednost;
}

uint32_t string::length() const{
	return size;
}

string string::rev_sub(int start, int len) const{
	char* new_string = new char[len + 1];
	for (int i = 0; i < len; i++) {
		new_string[i] = vrijednost[start - i - 1];
	}
	new_string[len] = '\0';

	return string(new_string);
}

void string::print(std::ostream& os) const{
	os << vrijednost;
}