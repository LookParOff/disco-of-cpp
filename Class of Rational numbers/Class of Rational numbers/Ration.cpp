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

std::ostream& Ration::operator<<(std::ostream& stream)
{
	stream << _num << " / " << _denum;
}

std::istream& Ration::operator>>(std::istream& stream)
{
	stream >> _num >> _denum;	// мб нужно будет сохранять из istream в лок переменную и её кинуть в _num
}

Ration Ration::operator+=(Ration fraction)
{
	_num += fraction.getNum;
	_denum += fraction.getDenum;
	//return Ration(_num + fraction.getNum, _denum + fraction.getDenum);
}

Ration Ration::operator*=(Ration fraction)
{
	return Ration(_num * fraction.getNum, _denum * fraction.getDenum);
}

Ration Ration::operator-()
{
	return Ration(-_num, _denum);
}

Ration operator+(Ration fraction, Ration fr)
{
	return Ration(fraction.getNum + fr.getNum, fraction.getDenum + fr.getDenum);
}

Ration operator*(Ration fraction, Ration fr)
{
	return Ration(fraction.getNum * fr.getNum, fraction.getDenum * fr.getDenum);
}

bool Ration::operator==(Ration fr)
{
	if (_num == fr.getNum() && _denum == fr.getDenum())
	{
		return true;
	}
	return false;
}

bool Ration::operator>(Ration fr)
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
