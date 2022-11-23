#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <string>
#include <iostream>

#define charToInt(c) (c-'0')

namespace vsite::oop::kol {

    inline int sum_digits(const char *__str);


    inline double operator ""s(const char *__str, size_t __len) {

    }


    inline double operator ""_GB(unsigned long long int num) {
        return num;
    }

    ///////operating_system

    class operating_system {
    public:
        virtual std::string release() const = 0;

        virtual std::string build() const = 0;

        virtual unsigned space() const = 0;

        virtual ~operating_system() = 0;
    };


    class windows : public operating_system {
    public:
        std::string release() const override;

        std::string build() const override;

        unsigned int space() const override;
    };

//////test_string
    class string {
        char* nstring;
        short nlength;

    public:

        string();
        string(const char* input);
        string(string & str);
        virtual ~string();
        unsigned int length();
        std::string rev_sub(const int a, const int b);

    };


}
