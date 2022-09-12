#include <iostream>
#include "Animal.h"

Animal::Animal(){
	id++;
}

Animal::Animal(std::string name){
	id++;
	idAnimal = id;
	this->name = name;
}

void Animal::sound(){
	std::cout << "Animal made a sound!" << std::endl;
}