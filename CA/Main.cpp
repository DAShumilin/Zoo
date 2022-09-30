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
int Animal::idAnimalUn = 1;

int main(){
    
    Cat* cat1 = new Cat("...");
    Cat* cat2 = new Cat("...");
    cat1->printIdAnimal();
    cat2->printIdAnimal();
    delete cat1;
    Cat* cat3 = new Cat("...");
    cat2->printIdAnimal();
    cat3->printIdAnimal();

    return 0;
}