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
    
    Cat* cat1 = new Cat("1");
    Cat* cat2 = new Cat("2");
    cat1->printIdAnimal();
    cat2->printIdAnimal();
    delete cat2;
    Cat* cat3 = new Cat("3");
    cat1->printIdAnimal();
    cat3->printIdAnimal();
    delete cat1;
    delete cat3;
    Cat* cat4 = new Cat("4");
    cat4->printIdAnimal();
    delete cat4;

    return 0;
}