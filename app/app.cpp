#include "app.h"

/*-------------------------------test 1---------------------------------------*/
unsigned sum_digits(std::string s) {
	unsigned sum = 0;

	for (int i = 0; i < s.length(); ++i) {
		if (std::isdigit(s[i]) != 0) {
			sum += (unsigned) s[i] - 48;
		}
		else {
			continue;
		}
	}

	return sum;
}



/*--------------------------------test 2--------------------------------------*/
unsigned visible_towers(const unsigned list[], int num) {
	int tallest = 0;
	int count = 0;

	for (int i = 0; i < num; i++) {
		if (list[i] > tallest) {
			tallest = list[i];
			count++;
		}
	}
	return count;
	
}


/*---------------------------------test 3----------------------------------*/
int operator "" _GB(unsigned long long n) {
	return n;
}

std::string windows::release() const { return "22H2"; }
std::string windows::build() const { return "10.0.22621.819"; }
int windows::space() const { return 25_GB; }


/*---------------------------------test 4----------------------------------*/

string::string(char& string) {
	place = &string;
	
}


unsigned string::length() {

}