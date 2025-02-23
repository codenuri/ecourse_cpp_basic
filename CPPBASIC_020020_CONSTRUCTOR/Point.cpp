// Point.cpp
#include <print>
#include "Point.h"

Point::Point( int a /*= 0*/, int b /*= 0*/) 
{
	x = a;
	y = b;
}
void Point::set(int a,  int b) 
{
	x = a;
	y = b;
}
void Point::print()
{
	std::println("{}, {}", x, y);
}