// MathApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Utility.h"

#include <iostream>

void testLMBSet();
void testAdd();
void testRMBSet();

int main()
{
	//testAdd();
	testLMBSet();

	//testRMBSet();

	system("pause");

    return 0;
}

void testLMBSet()
{
	unsigned int testInt = 0xFFFFFFFF;
	
	std::cout << testInt << ": leftmost should be True " << isLeftMostBitSet(testInt) << std::endl;

	testInt = 0x80000000;

	std::cout << testInt << ": leftmost should be True " << isLeftMostBitSet(testInt) << std::endl;

	testInt = 0x80000001;

	std::cout << testInt << ": leftmost should be True " << isLeftMostBitSet(testInt) << std::endl;

	testInt = 0x7FFFFFFF;

	std::cout << testInt << ": leftmost should be False " << isLeftMostBitSet(testInt) << std::endl;

	testInt = 0x00000000;

	std::cout << testInt << ": leftmost should be False " << isLeftMostBitSet(testInt) << std::endl;
}

void testAdd()
{
	std::cout << add(10, 5) << std::endl;
	std::cout << add(10, 6) << std::endl;
	system("pause");
}

void testRMBSet()
{
	unsigned int testInt = 0x00;

	std::cout << testInt << ": rightmost should be false " << isRightMostBitSet(testInt) << std::endl;

	testInt = 0x01;

	std::cout << testInt << ": rightmost should be true " << isRightMostBitSet(testInt) << std::endl;

	testInt = 0x02;

	std::cout << testInt << ": rightmost should be false " << isRightMostBitSet(testInt) << std::endl;

	testInt = 0x03;

	std::cout << testInt << ": rightmost should be true " << isRightMostBitSet(testInt) << std::endl;

	testInt = 0xFFFFFFFF;

	std::cout << testInt << ": rightmost should be true " << isRightMostBitSet(testInt) << std::endl;

}
