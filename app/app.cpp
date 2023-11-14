#include "app.h"
#include <iostream>



unsigned sum_digits(std::string s)
{
	unsigned int zbroj = 0;
	for (int i = 0; i < s.length(); ++i)
	{
		if (isdigit(s[i]))
			zbroj += int(s[i]) - 48;
	}
	return zbroj;
}

int operator "" _GB(unsigned long long int broj)
{
	return broj;
}



unsigned visible_towers(const uint32_t* niz, int size)
{
	int h = niz[0];
	int brojac = 1;
	for (int i = 0; i < size; ++i)
	{
		if (niz[i] > h)
		{
			h = niz[i];
			++brojac;
		}
	}
	return brojac;
}

string::string(std::string s) : size(s.length())
{
	s1.assign(s);
}
string::string(const string& other) : size(other.size)
{
	s1.assign(other.s1);
}

std::string windows::release() const
{
	return "22H2";
}
std::string windows::build() const
{
	return "10.0.22621.819";
}
int windows::space() const 
{
	return 25;
}

unsigned string::length() const
{
	return size;
}
string string::rev_sub(int start, int duljina) const{
	std::string s = s1.substr(start - duljina, duljina);
	string s2(s);
	return s2;
}

void string::print(std::ostream& s) const
{
	for (int i = size-1; i >= 0; --i)
	{
		s << s1[i];
	}
}


