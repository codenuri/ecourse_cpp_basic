#include "Point.h"

Point::Point(int x, int y) : x{x}, y{y}
{
}
void Point::set(int a, int b)
{
	x = a;
	y = b;
}
void Point::print() const 
{
	std::println("{}, {}", x, y);
}