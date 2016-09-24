#pragma once

int add(int a, int b);

int multiply(unsigned int a, unsigned int b);

int divide(unsigned int a, unsigned int b);

bool isLeftMostBitSet(unsigned int value);

bool isRightMostBitSet(unsigned int value);

bool isBitSet(unsigned int value, unsigned char bit_to_check);

int GetRightMostSetBit(unsigned int value);

int GetLeftMostSetBit(unsigned int value);

void PrintBinary(unsigned char value);

bool isPowerOfTwo(unsigned int value);