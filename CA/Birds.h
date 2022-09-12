#pragma once

#include "Animal.h"

class Birds : public Animal {

public:

	Birds(std::string name) : Animal(name) {};

	~Birds() {
		id--;
	}

	void sound() {
		std::cout << "Kar - Kar" << std::endl;
	}
};