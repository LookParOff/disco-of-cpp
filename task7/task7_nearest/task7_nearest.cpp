#include <iostream>
#include <vector>

float nearest_el(std::vector<int>::const_iterator iterBeg, std::vector<int>::const_iterator iterEnd, float R)
{
	float near = INFINITY;
	float min = abs(*iterBeg - R);
	while (iterBeg != iterEnd)
	{
		if (abs(*iterBeg - R) < min)
		{
			near = *iterBeg;
		}
		++iterBeg;
	}
	return near;
}

int main()
{
	std::cout << "near" << std::endl;
	std::vector<int> arr = { 1,2,3,4,7 };
	std::vector<int>::const_iterator iterBeg;
	iterBeg = arr.cbegin();

	std::vector<int>::const_iterator iterEnd;
	iterEnd = arr.cend();

	std::cout << nearest_el(iterBeg, iterEnd, 6) << std::endl;
}

