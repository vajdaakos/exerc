#include "Cat.h"
#include <iostream>

//short Cat::b=-1;
Cat::Cat()
{
	Animal::c = 5;

}


Cat::~Cat()
{
	
}
void Cat::Increment_b() 
{
	b++;
}
void Cat::Print()
{
	std::cout << "Cat b: " << b << std::endl;
}
const short* const Cat::getpub() const
{
	return &pub;
}
 const short& Cat::get_pub() const
{
	const short& ref = pub;
	return ref;
}
short Cat::get_pubb() const
{
	a++;
	return pub;
}

int& Cat::operator[](unsigned int index)
{

	return c;
}

std::ostream& operator<<(std::ostream& stream, const Cat & cat)
{
	stream << cat.c<<" " <<cat. pub<<" "<<cat.alma<<" "<<cat.körte<<" "<<cat.Name<< " "<<cat.b<<" "<<cat.a<<" "<<cat.c<<" "<<cat.ff<<std::endl;
	return stream;
}
