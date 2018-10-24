#pragma once
class Negyzet
{
public:
	Negyzet(int oldal);
	~Negyzet();
	Negyzet(const Negyzet& other);
	Negyzet* returnthis();

private:
	int oldal;
};

