#pragma once
#include <vector>
#include "Animal.h"

class Zoo {

public:

	std::vector <Animal*> arr;

	Zoo() {
	}

	Zoo(std::vector <Animal*> arr) {
		this->arr = arr;
	}

	void add(Animal* obj) {
		arr.push_back(obj);
	}

	void removeEnd() {
		arr.pop_back();

	}

	void remove(int j) {
		for (int i = 0; i < arr.size(); ++i) {
			if (j == i) {
				arr.erase(arr.begin() + j);
			}
		}
	}
};