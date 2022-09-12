#include <iostream>
#include <vector>
#include "Animal.h"
#include "Mamma.h"
#include "Birds.h"
#include "Human.h"
#include "Cat.h"
#include "Dog.h"
#include "Fox.h"
#include "Sparrow.h"
#include "Cock.h"
#include "Zoo.h"

int Animal::id = 0;

int main(){
    
    Birds bird_1("Ivan");
    Birds bird_2("Misha");
    Birds bird_3("Denis");

    Animal::printAmount();
    bird_1.printIdAnimal();
    bird_2.printIdAnimal();
    
    std::vector <Animal*> arr;
    arr.push_back(&bird_1);
    arr.push_back(&bird_2);

    Zoo zoo(arr);

    zoo.add(&bird_3);
    zoo.removeEnd();
    zoo.remove(1);

    return 0;
}