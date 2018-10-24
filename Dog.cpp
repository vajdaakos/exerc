#include "Dog.h"
#include <iostream>


Dog::Dog()
{
	std::cout << "Created" << std::endl;
	Animal::c = 6;
	Name = "Have no";
}


Dog::~Dog()
{
	std::cout << "destroyed dog" << std::endl;
}

void Dog::Talk() const
{
	std::cout << "Woof" << std::endl;
}

std::ostream& operator<<(std::ostream& stream, Dog& dog)
{
	stream << dog.Name;
	return stream;
}



const char* Dog::Talk_to_me()
{
	return "Woof to operator!\0";
}

Dog::Dog(const Dog& other):a(10),b(other.b)
{
	std::cout << "Copied" << std::endl;
	Name = "Copycat";
}
