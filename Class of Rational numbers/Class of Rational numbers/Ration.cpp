#include "Ration.h"

Ration::Ration()
{
	_num = 0;
	_denum = 1;
}

Ration::Ration(int num, int denum)
{
	if (denum == 0)
	{
		throw std::exception();
	}
	_num = num;
	_denum = denum;
}

Ration::Ration(int num)
{
	_num = num;
	_denum = 1;
}

const int& Ration::getNum()
{
	int& ret = _num;
	return ret;
}

const int& Ration::getDenum()
{
	int& ret = _denum;
	return ret;
}

std::ostream& operator<<(std::ostream& stream, Ration& rat)
{
	stream << rat.getNum() << "/" << rat.getDenum();
	return stream;
}

std::istream& operator>>(std::istream& stream, Ration& rat)
{
	stream >> rat._num >> rat._denum;	// мб нужно будет сохранять из istream в лок переменную и её кинуть в _num
	return stream;
}

void Ration::operator+=(Ration& fraction)
{
	if (_denum == fraction.getDenum()) {
		_num = _num + fraction.getNum();
	}
	else {
		_num = _num * fraction.getDenum() + fraction.getNum() * _denum;
		_denum = _denum * fraction.getDenum();
	}
}

void Ration::operator*=(Ration& fraction)
{
	_num += fraction.getNum();
	_denum += fraction.getDenum();
}

Ration Ration::operator-()
{
	return Ration(-_num, _denum);
}

Ration Ration::operator+(Ration& fr)
{
	int local_num = 0;
	int local_denum = 0;
	if (_denum == fr.getDenum()) {
		local_num = _num + fr.getNum();
	}
	else {
		local_num = _num * fr.getDenum() + fr.getNum() * _denum;
		local_denum = _denum * fr.getDenum();
	}
	return Ration(local_num, local_denum);
}

Ration Ration::operator*(Ration& fr)
{
	return Ration(_num * fr.getNum(), _denum * fr.getDenum());
}

bool Ration::operator==(Ration& fr)
{
	if (_num == fr.getNum() && _denum == fr.getDenum())
	{
		return true;
	}
	return false;
}

bool Ration::operator>(Ration& rat)
{
	if (_denum == rat.getDenum()) {
		if (_num > rat.getNum()) {
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else {
		if (_num * rat.getDenum() > rat.getNum() * _denum) {
			return 1;
		}
		else {
			return 0;
		}
	}
}
int Ration::_nod()
{
	int a, b;
	a = _num;
	b = _denum;
	while (a != b)
	{
		if (a > b)
		{
			a -= b;
		}
		else
		{
			b -= a;
		}
	}
	return a;
}
Ration::operator double()
{
	double ret = 0;
	ret = _num / _denum;
	return ret;
}
