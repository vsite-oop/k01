#include "app.h"

namespace vsite::oop::kol {


///////// TEST_METHOD(test_digits)

    inline int sum_digits(const char *__str) {
        std::string strInput = __str;
        int sum = 0;

        for (int i = 0; i < strInput.length(); ++i) {
            if (isdigit(strInput[i])) {
                int a = charToInt(strInput[i]);
                sum = sum + a;
                return sum;
            };
        }
        return sum;
    }

/////TEST_METHOD(test_os)
    operating_system::~operating_system() {};

    std::string windows::release() const { return "22H2"; }

    std::string windows::build() const { return "10.0.22621.819"; }

    unsigned windows::space() const { return 1_GB; }


/////TEST_METHOD(test_string)
    string::string(const char *input) {
        nlength = strlen(input) + 1;
        nstring = new char[nlength];
        for (int i = 0; i < (nlength - 1); i++) {
            nstring[i] = input[i];
        }
        nstring[(nlength - 1)] = NULL;
    }

    unsigned int string::length() {
        int i = 0;
        while (nstring[i] != '\0') {
            i++;
        }
        return i;
    }

    std::string string::rev_sub(const int begin, const int len) {
        char* res = new char[len + 1];
        for (int i = 0; i < len; i++)
            res[i] = *(nstring + begin + i);
        res[len] = 0;
        return res;
    }


}
