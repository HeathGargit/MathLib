#include "Utility.h"

int add(int a, int b)
{
	return a + b;
}

bool isLeftMostBitSet(unsigned int value)
{
	if (value & 0x80000000 == 0x80000000)
	{
		return true;
	}

	return false;
}

bool isRightMostBitSet(unsigned int value)
{
	if (value & 0x01 == 0x01)
	{
		return true;
	}

	return false;
}
