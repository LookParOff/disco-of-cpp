#include <iostream>
#include <string>


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

