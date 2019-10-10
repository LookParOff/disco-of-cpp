#include "pch.h"
#include "../task3/header_for_task3.h"

TEST(ex1, ex1ReturnCorrect)
{
	std::string res = "1010";
	EXPECT_EQ(exercise1(10, 2), res);
	res = 'A';
	EXPECT_EQ(exercise1(10, 16), res);
	res = "10";
	EXPECT_EQ(exercise1(10, 10), res);
	res = "10";
	EXPECT_EQ(exercise1(3, 3), res);
	res = "10";
	EXPECT_EQ(exercise1(20, 20), res);

}
TEST(ex2, ex2ReturnCorrect1)
{
	std::string a = "1010";
	int b = 2;
	EXPECT_EQ(exercise2(a, b), 10);
	a = "1011";
	EXPECT_EQ(exercise2(a, b), 11);
	a = "A";
	b = 16;
	EXPECT_EQ(exercise2(a, b), 10);

}

TEST(ex2, ex2ReturnCorrect2) 
{
	std::string a = "A";
	int b = 16;
	EXPECT_EQ(exercise2(a, b), 10);

	a = "F";
	b = 16;
	EXPECT_EQ(exercise2(a, b), 15);
	a = "10";
	b = 16;
	EXPECT_EQ(exercise2(a, b), 16);
}

TEST(split, splitReturnCorrect)
{
	std::string a = "A B C D";
	char sep = ' ';
	std::vector<std::string> res = { "A", "B", "C", "D" };
	EXPECT_EQ(split(a, sep), res);

	a = "Hello World !";
	sep = ' ';
	res = { "Hello",  "World", "!" };
	EXPECT_EQ(split(a, sep), res);

	a = "Hello0World0!";
	sep = '0';
	res = { "Hello",  "World", "!" };
	EXPECT_EQ(split(a, sep), res);

	a = "";
	sep = ' ';
	res = { "" };
	EXPECT_EQ(split(a, sep), res);
}

TEST(bubleSort, bubleSortReturnCorrect)
{
	std::vector<int> arr = {4, 3, 2, 1};
	std::vector<int> res = { 1, 2, 3, 4 };
	EXPECT_EQ(bubleSort(arr), res);

	arr = { 1 };
	res = { 1 };
	EXPECT_EQ(bubleSort(arr), res);

	arr = { 9, 10, 101, -15, 1, 0, 1000};
	res = { -15, 0, 1, 9, 10, 101, 1000 };
	EXPECT_EQ(bubleSort(arr), res);

	arr = { 4, 3, 2, 1 };
	res = { 1, 2, 3, 4 };
	EXPECT_EQ(bubleSort(arr), res);

	arr = {  };
	res = {  };
	EXPECT_EQ(bubleSort(arr), res);
}