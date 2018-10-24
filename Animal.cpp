#include "Animal.h"
#include <iostream>


Animal::Animal()
{
}


Animal::~Animal()
{

}
void Animal::Talk() const
{
	std::cout << "What should I say" << std::endl;
}
const int Animal::add_animal(Animal other) const
{
	return c + other.c;
}
