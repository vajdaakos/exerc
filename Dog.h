#pragma once
#include "Animal.h"
#include <ostream>

class Dog :
	public Animal
{
public:
	short a;
	int c=6;
	double b=6.5;
	Dog();
	~Dog();
	void Talk() const override;
	const char* Talk_to_me();
	const char* Name;
	friend std::ostream& operator<<(std::ostream& stream, Dog& dog);
	Dog(const Dog& other);
};

