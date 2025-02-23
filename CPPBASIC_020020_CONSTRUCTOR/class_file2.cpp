#include <print>

class Point 
{
	int x;
	int y;
public:
	Point( int a = 0, int b = 0);
	void set(int a,  int b);
	void print();
};

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

int main()
{
	Point p{1, 2};
	p.print();
}