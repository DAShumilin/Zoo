#pragma once

#include "Animal.h"

class Mamma : public Animal {

public:

	Mamma(std::string name) : Animal(name) {};

	void sound() {
		std::cout << "Kx - Kx" << std::endl;
	}
};