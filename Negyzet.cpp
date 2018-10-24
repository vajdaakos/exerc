#include "Negyzet.h"
#include <iostream>


Negyzet::Negyzet(int oldal):oldal(oldal)
{
	std::cout << "Negyzet created" << std::endl;
}


Negyzet::~Negyzet()
{
	std::cout << "Negyzet deleted" << std::endl;
}

Negyzet::Negyzet(const Negyzet& other):oldal(other.oldal)
{
	std::cout << "Negyzet copied" << std::endl;
}

Negyzet* Negyzet::returnthis()
{
	return this;
}
