#pragma once

#include "Mamma.h"

class Fox : public Mamma {

public:

	Fox(std::string name) : Mamma(name) {};

	~Fox() {
		id--;
	}
};