#include <iostream>
#include <string>
#include <vector>

std::string exercise1(int num_input, int n_input)
{
	int num = num_input;
	int n = n_input;

	std::string result = "";
	do
	{
		if (num % n < 10)
		{
			result += char('0' + num % n);
		}
		else
		{
			result += char('A' + num % n - 10);
		}
		num /= n;

	} while (num >= 1);

	std::reverse(result.begin(), result.end());
	return result;
}


int exercise2(std::string& input, int& n) 
{
	int result = 0;
	int i = input.size() - 1;
	for (char let: input)
	{	
		if (int(let) >= 65)
		{
			result += (int(let) - 55) * pow(n, i);
		}
		else
		{
			result += (int(let) - 48) * pow(n, i);
		}
		--i;
	}
	return result;
}

std::vector<std::string> split(std::string inputString, char sep)
{
	std::string currString = "";
	std::vector<std::string> arrOfResult;
	for (char letter : inputString)
	{
		if (letter == sep)
		{
			arrOfResult.push_back(currString);
			currString = "";
		}
		else
		{
			currString += letter;
		}
	}
	arrOfResult.push_back(currString);
	return arrOfResult;
}

void swap(int& a, int& b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}

std::vector<int> bubleSort(std::vector<int> inputArr)
{
	if (inputArr.size() == 0)
	{
		return inputArr;
	}

	for (int i = 0; i < inputArr.size(); ++i)
	{
		for (int j = i + 1; j < inputArr.size(); ++j)
		{
			if (inputArr[i] > inputArr[j])
			{
				swap(inputArr[i], inputArr[j]);
			}
		}
	}

	return inputArr;
}