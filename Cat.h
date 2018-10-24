#pragma once
#include "Animal.h"
#include <ostream>
#include <string>


class Cat :
	public Animal
{

private:
	short pub = 2;
	int alma = 23;
	int körte = 65;

public:
	std::string Name="Unknown";
	static short inline b=-1;
	mutable double a=0;
	int c=5;
	int ff=0;
	static void Increment_b();
	static void Print();
	Cat();
	~Cat();
	const short* const getpub()const ;
	const short& get_pub() const;
	short get_pubb() const;
	int& operator[](unsigned int index);
	friend std::ostream& operator<<(std::ostream& ,const Cat& cat);

	
	
	
};

