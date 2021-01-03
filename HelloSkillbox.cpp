﻿#include <iostream>
#include <vector>
class Animal {
public:
	virtual void Voice() {
		std::cout << "Voice\n";
	}
};

class Dog : public Animal {
public:
	void Voice() override {
		std::cout << "Woof!\n";
	}
};

class Cat : public Animal {
public:
	void Voice() override {
		std::cout << "Meow!\n";
	}
};

class Cow : public Animal {
public:

	void Voice() override {
		std::cout << "Moo!\n";
	}
};

int main() {
	int size = 3;
	Animal** animal = new Animal * [size];
	Animal* cow = new Cow;
	Animal* dog = new Dog;
	Animal* cat = new Cat;

	animal[0] = cow;
	animal[1] = dog;
	animal[2] = cat;

	for (int i = 0; i < size; i++) {
		animal[i]->Voice();
	}

	return 0;
}