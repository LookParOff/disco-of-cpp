#pragma once
#include <iostream>
class Ration
{
private:

	int _num;
	int _denum;
public:
	Ration();
	Ration(int num, int denum);
	Ration(int num);

	const int& getNum();
	const int& getDenum();

	friend std::istream& operator>>(std::istream& stream, Ration &rat);
	friend std::ostream& operator<<(std::ostream& stream, Ration &rat);
	
	Ration operator+=(Ration& fraction);
	Ration operator*=(Ration& fraction);
	friend Ration operator+(Ration& fr);
	friend Ration operator*(Ration& fr);
	Ration operator-();
	
	bool operator==(Ration& fr);
	bool operator>(Ration& fr);

	operator double();
};