#include "pch.h"
#include "../task3/header_for_task3.h"

TEST(ex1, ex1_return_correct)
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
TEST(ex2, ex2_return_correct1) 
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

TEST(ex2, ex2_return_correct2) 
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