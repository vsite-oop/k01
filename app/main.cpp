#include "app.h"

//3. zadatak
namespace py {
	class package {
	public:
		virtual std::string naziv() const = 0;
		virtual std::string verzija() const = 0;
		virtual int godina() const = 0;
		~package() = default;
	};
}

class package_impl : py::package {
public:
	std::string naziv() const override{
		return "Package";
	}

	std::string verzija() const override{
		return "2.18.02";
	}

	int godina() const override{
		return 2013;
	}
};

int main()
{
	/* Kolokvij 2021/2022 */
	//1. zadatak
	const char* lista_karata[5] = { "H8", "HA", "H6", "H3", "HQ" };
	std::cout << is_flush(lista_karata) << std::endl;
	const char* lista_karata2[5] = { "S8", "DA", "H6", "H3", "HQ" };
	std::cout << is_flush(lista_karata2) << std::endl;

	//3. zadatak
	package_impl pk;
	std::cout << pk.naziv() << pk.verzija() << pk.godina() << std::endl;
	const char* s = "123Zagreb";
	char* enptr;
	int a = strtol(s, &enptr, 10);
	std::cout << a;
}


