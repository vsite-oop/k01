#include "app.h"

uint32_t sum_digits(std::string text)
{
	uint32_t digit_sum = 0;

	for (int i = 0; i < text.length(); i++)
	{
		if (isdigit(text[i]))
		{
			digit_sum += (text[i] - '0');
		}
	}

	return digit_sum;
}

/**********************************************/

uint32_t visible_towers(const uint32_t* towers, int size)
{
	uint32_t vis_towers = 1;
	uint32_t current_highest = towers[0];

	for (int i = 1; i < size; i++)
	{
		if (towers[i] > current_highest)
		{
			vis_towers++;
			current_highest = towers[i];
		}
	}

	return vis_towers;
}

/**********************************************/

std::string windows::release() const
{
	return "22H2";
}

std::string windows::build() const
{
	return "10.0.22621.819";
}
long long int windows::space() const
{
	return 25_GB;
}

/**********************************************/

string::string(const char* text) :
	size(strlen(text)), text(new char[size])
{
}

string::string(const string& other) :
	size(other.size), text(new char[size])
{
	for (int i = 0; i < size; i++)
	{
		text[i] = other.text[i];
	}
}

string::~string()
{
	delete[] text;
}

uint32_t string::length() const
{
	return size;
}

const string string::rev_sub(int offset, int count) const
{
	char* new_text = new char[count + 1];

	for (int i = 0; i <= count; i++)
	{
		new_text[i] = offset - i - 1;
	}

	const string new_string(new_text);
	delete[] new_text;
	return new_string;
}

void string::print(std::ostream& os) const
{
	os << text;
}


