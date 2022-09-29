#pragma once

#include "Mamma.h"

class Dog : public Mamma {

public:

	Dog(std::string name) : Mamma(name) {};
};