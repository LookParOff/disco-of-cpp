#include <iostream>
#include <vector>
#include <map>
#include <string>

template <typename T>
void swap(std::vector<T>& arr, int fir, int sec)
{
	T t;
	t = arr[fir];
	arr[fir] = arr[sec];
	arr[sec] = t;
}

void solve(std::map<std::string, std::vector<int>> inputMap)
{
	//std::map<std::string, int> newMap;
	int sumOfRevenue;
	std::vector<std::string> vectorOfNames;
	std::vector<int> vectorOfRevenues;


	for (auto employer : inputMap)
	{
		sumOfRevenue = 0;
		for (int monthCash : employer.second)
		{
			sumOfRevenue += monthCash;
		}
		vectorOfNames.push_back(employer.first);
		vectorOfRevenues.push_back(sumOfRevenue);
	}

	int t = 0;
	for (int i = 0; i < vectorOfRevenues.size(); ++i)
	{
		for (int j = i; j < vectorOfRevenues.size(); ++j)
		{
			if (vectorOfRevenues[i] > vectorOfRevenues[j])
			{
				swap(vectorOfNames, i, j);
				swap(vectorOfRevenues, i, j);
			}
		}
	}
	for (std::string name: vectorOfNames)
	{
		std::cout << name << " ";
	}
	std::cout << std::endl;
}

int main()
{
	std::string he;
	std::vector<int> revenueOne = { 100, 200, 3000 };
	std::vector<int> revenueTwo = { 110, 210, 310 };
	std::vector<int> revenue3 = { 100, 1, 0};
	std::vector<int> revenue4 = { 33, 33, 3};
	std::map<std::string, std::vector<int>> inputMap = { {"Fir", revenueOne}, {"Sec", revenueTwo},  {"3th", revenue3}, {"4th", revenue4} };
	solve(inputMap);
}