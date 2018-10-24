#pragma once
class Animal
{
public:
	int c=2;
	Animal();
	virtual ~Animal();
	virtual void Talk() const;
	virtual const int add_animal(Animal other) const;
};

