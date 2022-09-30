#pragma once
#include <string>

class Animal {

public:

	int static id;
	int static idAnimalUn;
	int idAnimal;
	std::string name;
	Animal() {
		id++;
	}

	Animal(std::string name) {
		id++;
		idAnimal = idAnimalUn;
		++idAnimalUn;
		this->name = name;
	}

	~Animal() {
		id--;
	}

	void sound() {
		std::cout << "Animal made a sound!" << std::endl;
	}

	void static printAmount() {
		std::cout << id << std::endl;
	}

	void printIdAnimal() {
		std::cout << idAnimal << std::endl;
	}
};