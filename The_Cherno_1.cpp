// The_Cherno_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

 
#include <iostream>
#include <typeinfo>
#include "Dog.h"
#include "Cat.h"
#include <memory>
#include "Negyzet.h"
#include <array>
#include <fstream>
void Log(const char*);
template <class T> void add(T,T) = delete;
int fakt(unsigned int s)
{
	if (s==0)
	{
		return 1;
	}
	else
	{
		return (s)*fakt(s - 1);
	}
}
const double add(const double& a, const double& b)
{
	return a + b;
}

void DogTalk(const Dog& dog)
{
	dog.Talk();
}
template<size_t N>
void printarray(std::array<int,N>& array)
{
	for (int i = 0; i < N; i++)
		std::cout << array[i] << std::endl;
}

int main()
{
	std::cout << "Hello World!\n";
	Log("Got ya! ");
	int a = 5;
	void* p = &a;
	int& ref = a;
	std::cout << p <<std::endl;
	std::cout << *((int*) p) <<std::endl;
	std::cout << &p << std::endl;
	std::cout << ref << std::endl;
	Animal animal;
	Animal* p_animal = &animal;
	p_animal->Talk();
	Dog dog;
	
	std::cout << "Static short b for Cat:" << Cat::b << std::endl;
	Cat::Increment_b();
	std::cout << "Static short b for Cat:" << Cat::b << std::endl;
	Cat cat;
	cat.b = 0;
	std::cout << "Static short b for Cat:" << cat.b << std::endl;
	Cat::Increment_b();
	std::cout << "Static short b for Cat:" << cat.b << std::endl;
	std::cout << "Type of dog: " << typeid(dog).name() << std::endl;

	Cat cat2;
	cat2.b = 6;
	std::cout << "Static short b for Cat2:" << cat2.b << std::endl;
	std::cout << "Static short b for Cat:" << cat.b << std::endl;
	cat2.Increment_b();
	std::cout << "Static short b for Cat2:" << cat2.b << std::endl;
	std::cout << "Static short b for Cat:" << cat.b << std::endl;
	std::cout << "Type of dog: " << typeid(dog).name() << std::endl;
	p_animal = &dog;
	std::cout << "Type of p_animal: " << typeid(p_animal).name() << std::endl;
	p_animal->Talk();
	Animal* allatok [3];
	allatok[0] = &animal;
	allatok[1] = p_animal;
	allatok[2] = &dog;
	for (auto instance : allatok)
	{
		
			instance->Talk();
		
			
	}
	std::cout << "Cat pub: " << cat.getpub() << std::endl;
	const short* const p_pub = cat.getpub();
	std::cout << "Cat pub: " << *(cat.getpub()) << std::endl;
	std::cout << "Cat pub: " << "p_pub:"<<*p_pub << std::endl;
	//*p_pub = 12;
	std::cout << "Cat pub: " << *(cat.getpub()) << std::endl;
	std::cout << "Size of dog: " << sizeof(dog) << std::endl;
	//cat.get_pub() = 89;
	
	std::cout << "Cat pub: " << *(cat.getpub()) << std::endl;
	std::cout << "Cat pub: " << cat.get_pub() << std::endl;
	std::cout << &(cat.get_pub()) << std::endl;
	char h = 1;
	h++;
	std::cout << "h:" << (int)h << std::endl;
	auto v = new int[3]{ 5, 4, 3 };
	std::cout << "v: " << v[1] << std::endl;
	std::cout << "add(3,2)=" << add(3.0, 2.0) << std::endl;
	std::cout << "cat.c: " << cat.c << std::endl;
	std::cout << "dog.c: " << dog.c << std::endl;
	std::cout<<"Add animal: "<< cat.add_animal(static_cast<Animal>(cat2))<<std::endl;
	const std::unique_ptr<Dog> tom = std::make_unique<Dog>();
	DogTalk(*tom);
	tom->Animal::Talk();
	Negyzet* first = new Negyzet(5);
	Negyzet* second = new Negyzet(*first);
	Negyzet* third=first->returnthis();

	delete first;
	delete second;
	const short& cat_pub = cat.get_pub();
	std::cout << cat_pub << std::endl;
	const short* const catpub = cat.getpub();
	std::cout << *catpub << std::endl;
	short test = cat_pub;
	short test2 = *catpub; 
	test++;
	test2 +=5;
	
	std::cout << test << std::endl;
	std::cout << test2 << std::endl;
	std::cout << *catpub << std::endl;
	std::cout << cat_pub << std::endl;
	
	std::cout << "overloaded operator: cat.c=" <<cat[1] << std::endl;

	std::cout << "overloaded operator <<" << cat << std::endl;
	std::cout << "overloaded operator << for dog: " << dog.Talk_to_me() << std::endl;
	Dog* doggy = new Dog(dog);
	std::cout << "overloaded operator << for dog: " << *doggy << std::endl;
	std::cout << "overloaded operator << for dog: " << dog << std::endl;
	std::cout << "overloaded operator << for dog: " << *tom << std::endl;


	delete doggy;
	int offset = (int)&((Dog*)nullptr)->a;
	std::cout << "a offset:" << offset << std::endl;
	offset = (int)&((Dog*)nullptr)->c;
	std::cout << "c offset:" << offset << std::endl;
	offset = (int)&((Dog*)nullptr)->b;
	std::cout << "b offset:" << offset << std::endl;
	offset = (int)&((Dog*)nullptr)->Name;
	std::cout << "Name offset:" << offset << std::endl;
	offset = (int)&((Dog*)nullptr)->Animal::c;
	std::cout << "Animal c offset:" << offset << std::endl;
	int* nn = ((int*)(((char*)doggy) + 4));
	std::cout <<*((short*)(((char*)doggy)+4)) << std::endl;
	std::cout << doggy << std::endl;

	std::array<int, 5> data = {1,2,3,4,5};
	for (auto val:data)
	{
		std::cout << val << std::endl;
	}

	printarray(data);
//	offset = (int)&((Cat*)nullptr)->alma;
//	std::cout << "cat alma offset:" << offset << std::endl;
	int* bab = ((int*)(((char*)(&cat)) + 16));
	*bab = 99;

	std::cout << *bab << std::endl;
	std::ofstream outfile;
	outfile.open("test.txt", std::fstream::out);
	if (outfile.is_open())
	{
		outfile << cat;
		outfile << cat2;

	}
	outfile.close();
	char szoveg[] = "1234567890";
	std::cout << szoveg << std::endl;
	std::cout << fakt(6) << std::endl;
	std::cout << *first << std::endl;
	/*const MAX_AGE;
	MAX_AGE = 6;"
	MAX_AGE = 7;*/

	//std::cout << "Size of cat: " << sizeof(cat) << std::endl;
	



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
