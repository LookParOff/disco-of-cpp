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
		// throw std::exception;
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
	stream << rat.getNum() << " / " << rat.getDenum();
	return stream;
}

std::istream& operator>>(std::istream& stream, Ration& rat)
{
	stream >> rat._num >> rat._denum;	// мб нужно будет сохранять из istream в лок переменную и её кинуть в _num
	return stream;
}

void Ration::operator+=(Ration& fraction)
{
	_num += fraction.getNum();
	_denum += fraction.getDenum();
	//return Ration(_num + fraction.getNum, _denum + fraction.getDenum);
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
	return Ration(_num + fr.getNum(), _denum + fr.getDenum());
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

bool Ration::operator>(Ration& fr)
{
	if (_num > fr.getNum() && _denum > fr.getDenum())
	{
		return true;
	}
	return false;
}

Ration::operator double()
{
	double ret = 0;
	ret = _num / _denum;
	return ret;
}
