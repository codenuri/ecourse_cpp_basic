#pragma once

class Point 
{
	int x{0};
	int y{0};
public:
	Point(int x = 0, int y = 0);
	void set(int a, int b);

	void print() const;
};