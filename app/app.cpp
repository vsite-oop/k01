#include "app.h"

uint32_t sum_digits(const std::string& s) {
    uint32_t n{ 0 };
    for (auto c : s)
        if (isdigit(c))
            n += c - '0';
    return n;
}

uint32_t visible_towers(const uint32_t* t, uint32_t n) {
    auto h = t[0];
    auto c{ 1 };
    for (uint32_t i = 1; i < n; ++i) {
        if (t[i] > h) {
            h = t[i];
            ++c;
        }
    }
    return c;
}

std::string windows::release() const { return "22H2"; }
std::string windows::build() const { return "10.0.22621.819"; }
unsigned long long windows::space() const { return 25_GB; }


string::string(const char* s) : len(strlen(s)), p(new char[len + 1]) {
    strcpy(p, s);
}
string::string(const string& other) : len(other.len), p(new char[len + 1]) {
    strcpy(p, other.p);
}
string::~string() {
    delete[] p;
}
uint32_t string::length() const {
    return len;
}
string string::rev_sub(uint32_t start, uint32_t length) const {
    char* arr = new char[length + 1];
    for (uint32_t i = 0; i < length; ++i)
        arr[i] = p[start - i - 1];
    arr[length] = 0;
    string t(arr);
    delete[] arr;
    return t;
}
void string::print(std::ostream& os) const {
    os << p;
}

