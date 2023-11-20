#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <iostream>

uint32_t sum_digits(const std::string& unos);

uint32_t visible_towers(const uint32_t tornjevi[], int size_of);

int operator "" _GB(unsigned long long mem);

class operating_system {
public:
	virtual std::string release() const = 0;
	virtual std::string build() const = 0;
	virtual int space() const = 0;
	virtual ~operating_system() = default;
};

class windows : public operating_system {
public:
	windows();
	std::string release() const;
	std::string build() const;
	int space() const;
};

class string {
private:
	uint32_t size;
	char* vrijednost;

public:
	string(const char* s);
	string(const string&);
	~string();

	uint32_t length() const;
	string rev_sub(int start, int len) const;
	void print(std::ostream& os) const;
};

/* Kolokvij 2021/2022 */
//1. zadatak
bool is_flush(const char* lista_karata[5]);

//2. zadatak
struct point {
	int x, y;
};

class polygon {
	int n;
	point* p;

public:
	polygon(int num);
	polygon(const polygon&);
	~polygon();

	void add(point* tocka) const;
	double perimeter() const;
};

//Vježba 4
class animal {
public:
	virtual std::string species() const = 0;
	virtual uint32_t legs() const = 0;
	virtual ~animal() = default;
};

class insect : public animal {
public:
	uint32_t legs() const override;
};

class cockroach : public insect {
public:
	std::string species() const override;
};

class spider : public animal {
public:
	uint32_t legs() const override;
};

class tarantula : public spider {
public:
	std::string species() const override;
};

class bird : public animal {
public:
	uint32_t legs() const override;
};

class sparrow : public bird {
public:
	std::string species() const override;
};

std::unique_ptr<animal> animal_factory(int which);

class leg_counter {
private:
	uint32_t size = 0;

public:
	uint32_t legs() const;
	std::string add_animal(animal*);
};