#include "app.h"


namespace vsite::oop::k1 {

	unsigned int sum_digits(std::string s) {
		
		int len = s.length();
		unsigned int sum = 0;
		for (auto i = 0; i < len; ++i) {
			if (isdigit(s[i])) {
				sum+=(int)s[i]-'0';
			}
			else {
				continue;
			}
		}
		return sum;
	}

	unsigned int visible_towers(const uint32_t* t, int len) {

		int see = 1; //prvoga uvijek vidim
		if (len != 0) {
		for (auto i = 0; i < len - 1; ++i) {
			if (t[i] < t[i + 1]) {
				++see;
			}
			else if (t[i] == t[i + 1]) {
				continue;
			}
			else {
				break;
			}
		}
		return see;
		}
		else {
			return 0;
		}
	}


	int operator "" _GB(unsigned long long mem) {
		return mem;
	}

	std::string windows::release() const{
		return "22H2";
	}
	std::string windows::build() const {
		return "10.0.22621.819";
	}
	int windows::space() const {
		return 25_GB;
	}

	string::string(const char* c) {
		this->c = c;
	}

	unsigned int string::length() const {
		return strlen(c);
	}

	string string::rev_sub(int start, int rev) const {
		
		
		for (auto i = 0; i < rev; ++i) {
			
		}
	}

	string::~string() {
		delete c;
		c == nullptr;
	}
}