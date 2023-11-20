#include "app.h"

uint32_t sum_digits(const std::string& unos) {
	uint32_t sum = 0;
	for (char v : unos) {
		if (isdigit(v)) {
			sum += v - '0';
		}
	}
	return sum;
}

uint32_t visible_towers(const uint32_t tornjevi[], int size_of) {
	uint32_t max = tornjevi[0];
	uint32_t n_visible = 1;
	for (uint32_t i = 0; i < size_of; i++) {
		if (max < tornjevi[i]) {
			max = tornjevi[i];
			n_visible++;
		}
	}
	return n_visible;
}

int operator "" _GB(unsigned long long mem) {
	return mem;
}

windows::windows() {};

std::string windows::release() const {
	return "22H2";
}

std::string windows::build() const {
	return "10.0.22621.819";
}

int windows::space() const {
	return 25_GB;
}

string::string(const char* s) {
	size = strlen(s);
	vrijednost = new char[size + 1];
	strcpy(vrijednost, s);
}

string::string(const string& other) {
	size = other.size;
	vrijednost = new char[size + 1];
	strcpy(vrijednost, other.vrijednost);
}

string::~string() {
	delete[] vrijednost;
}

uint32_t string::length() const{
	return size;
}

string string::rev_sub(int start, int len) const{
	char* new_string = new char[len + 1];
	for (int i = 0; i < len; i++) {
		new_string[i] = vrijednost[start - i - 1];
	}
	new_string[len] = '\0';

	return string(new_string);
}

void string::print(std::ostream& os) const{
	os << vrijednost;
}


/* Kolokvij 2021/2022 */
//1. zadatak
bool is_flush(const char* lista_karata[5]) {
	char boja = lista_karata[0][0];
	std::cout << "Boja:" << boja << std::endl;
	for (int i = 1; i < 5; i++) {
		std::cout << lista_karata[i][0] << std::endl;
		if (boja != lista_karata[i][0]) {
			return false;
		}
	}
	return true;
}

//2. zadatak

polygon::polygon(int num) {
	n = num;
}

polygon::polygon(const polygon& other) {
	n = other.n;
	p = other.p;
}

polygon::~polygon() {
	delete[] p;
}


//Vježba 4
uint32_t insect::legs() const {
	return 6;
}

uint32_t spider::legs() const {
	return 8;
}

uint32_t bird::legs() const {
	return 2;
}

std::string cockroach::species() const {
	return "cockroach";
}

std::string tarantula::species() const {
	return "tarantula";
}

std::string sparrow::species() const {
	return "sparrow";
}

std::unique_ptr<animal> animal_factory(int which) {
	switch (which)
	{
	case 1:
		return std::make_unique<cockroach>();
	case 2:
		return std::make_unique<sparrow>();
	case 3:
		return std::make_unique<tarantula>();
	default:
		return nullptr;
	}
}

std::string leg_counter::add_animal(animal* a) {
	size += a->legs();
	return a->species();
}

uint32_t leg_counter::legs() const {
	return size;
}

//Vježba 5
double operator "" _inch(unsigned long long inc) {
	return inc * 2.54;
}

double operator "" _eur(unsigned long long eur) {
	return eur * 7.5345;
}

tire::tire(double sz) {
	size = sz;
}

double tire::diameter() const {
	return size;
}

vehicle::vehicle(int xear) {
	yr = xear;
}

int vehicle::year() const{
	return yr;
}

product::product(double pri) {
	pr = pri;
}

double product::price() const {
	return pr;
}

car::car(int xear, double pri, double sz) : vehicle(xear), product(pri), guma(sz) {};

double car::tire_diameter() const{
	return guma.diameter();
}