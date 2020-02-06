#include <iostream>
#include <vector>

struct structToRet
{
	std::vector<int> beg = {  };
	std::vector<int> end = {  };
	std::vector<int> dist = {  };

} to_ret;

structToRet solve(std::vector<int> arr)
{
	to_ret.beg.resize(arr.size());
	to_ret.end.resize(arr.size());
	to_ret.dist.resize(arr.size());

	int currRepeatNum = -1;
	int currDistanceBeg = 0;
	for (int i = 0; i < arr.size(); ++i)
	{
		if (currRepeatNum != arr[i])
		{
			currRepeatNum = arr[i];
			currDistanceBeg = 0;
		}
		else
		{
			++currDistanceBeg;
		}
		to_ret.beg[i] = currDistanceBeg;
	}
	currRepeatNum = -1;
	int currDistanceEnd = 0;
	for (int i = arr.size() - 1; i >= 0; --i)
	{
		if (currRepeatNum != arr[i])
		{
			currRepeatNum = arr[i];
			currDistanceEnd = 0;
		}
		else
		{
			++currDistanceEnd;
		}
		to_ret.end[i] = currDistanceEnd;
	}

	for (int i = 0; i < arr.size(); ++i)
	{
		to_ret.dist[i] = fmin(to_ret.beg[i], to_ret.end[i]);
	}
	return to_ret;
}

int main()
{
	std::vector<int> arr = { 1, 1, 1, 1, 2, 2, 2, 5, 4, 7, 4, 4, 4, 4, 4, 9, 9, 1, 9, 9, 9, 0, 0, 0 }; 
	structToRet res = solve(arr);
	std::cout << "input: \n";
	for (int el : arr)
	{
		std::cout << el << " ";
	}
	std::cout << "\nbegin: \n";
	for (int el : res.beg)
	{
		std::cout << el << " ";
	}
	std::cout << "\nend: \n";
	for (int el : res.end)
	{
		std::cout << el << " ";
	}
	std::cout << "\ndist: \n";
	for (int el : res.dist)
	{
		std::cout << el << " ";
	}
	return 0;
}
