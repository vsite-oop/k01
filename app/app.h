#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <iostream>

namespace vsite::oop::k1 {

	unsigned int sum_digits(std::string s);

	unsigned int visible_towers(const uint32_t* t, int len);

	class operating_system{
	public:
		virtual std::string release() const = 0;
		virtual std::string build() const = 0;
		virtual int space() const = 0;

		virtual ~operating_system() = default;
	};

	class windows : public operating_system{
		std::string release() const override;
		std::string build() const override;
		int space() const override;
	};

	int operator "" _GB(unsigned long long mem);


	class string {
		const char* c;
	public:
		string(const char*);
		unsigned int length() const;
		string rev_sub(int start, int rev) const;
		void print(std::stringstream& ss) const;

		~string();
	};
}