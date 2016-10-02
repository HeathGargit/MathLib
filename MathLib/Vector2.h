#pragma once
class Vector2
{
public:
	Vector2();
	~Vector2();

	Vector2& operator+ (const Vector2& other);
	Vector2& operator= (const Vector2& other);

public:
	float x;
	float y;
};

