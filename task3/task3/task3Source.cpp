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
