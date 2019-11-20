#include "pch.h"
#include "CppUnitTest.h"
#include <iostream>
#include "../Class of Rational numbers/Ration.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestforclassofRationalNumber
{
	TEST_CLASS(TestforclassofRationalNumber)
	{
	public:
		
		TEST_METHOD(ostream)
		{
			Ration rat(1, 2);
			std::cout << rat << std::endl;
		}
		
		TEST_METHOD(istream)
		{
			Ration rat(1, 2);
			int x;
			std::cin >> x;
			//std::cin >> rat;
		}
	};
}
