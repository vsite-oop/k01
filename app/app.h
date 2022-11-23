#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <iostream>

inline unsigned long long int operator "" _GB(unsigned long long int n) {
    return n * 1024 * 1024 * 1024;
}

uint32_t visible_towers(const uint32_t* t, uint32_t n);

uint32_t sum_digits(const std::string& s);

class operating_system {
public:
    virtual std::string release() const = 0;
    virtual std::string build() const = 0;
    virtual unsigned long long space() const = 0;
    virtual ~operating_system() = default;
};

class windows : public operating_system {
public:
    std::string release() const override;
    std::string build() const override;
    unsigned long long space() const override;
};

class string {
    int len;
    char* p;
public:
    string(const char*);
    string(const string&);
    ~string();
    uint32_t length() const;
    string rev_sub(uint32_t start, uint32_t length) const;
    void print(std::ostream& os) const;
};
