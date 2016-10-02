#pragma once

#define _PI 3.14159265358979323846
#define _PI_OVER_180 0.01745329   //1 radian
#define _180_OVER_PI 57.29578

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

float degToRad(float degrees);

float radToDeg(float radians);