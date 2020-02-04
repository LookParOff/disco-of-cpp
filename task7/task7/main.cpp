// task7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

float calcTilda(std::vector<int>::const_iterator iterBeg, std::vector<int>::const_iterator iterEnd)
{
	float N = 0;
	float tilda = 0;

	while (iterBeg != iterEnd)
	{
		tilda += *iterBeg;

		++N;
		++iterBeg;
	}
	tilda *= 1 / N;
	return tilda;
}

float desp(std::vector<int>::const_iterator iterBeg, std::vector<int>::const_iterator iterEnd)
{
	float N = 0;
	float sum = 0;
	std::vector<int>::const_iterator iterBegCopy = iterBeg;
	std::vector<int>::const_iterator iterEndCopy = iterEnd;
	float tilda = calcTilda(iterBegCopy, iterEndCopy);
	while (iterBeg != iterEnd)
	{
		sum += pow(*iterBeg - tilda, 2);
		
		++N;
		++iterBeg;
	}
	
	sum *= 1 / N;
	
	return sum;
}


int main()
{
	std::vector<int> arr = { 1,2,3,4};
	std::vector<int>::const_iterator iterBeg;
	iterBeg = arr.cbegin();

	std::vector<int>::const_iterator iterEnd;
	iterEnd = arr.cend();

	std::cout << desp(iterBeg, iterEnd) << std::endl;
}
