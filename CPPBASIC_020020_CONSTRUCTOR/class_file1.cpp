#include <print>

class Point 
{
	int x;
	int y;
public:
	Point( int a = 0, int b = 0) 
	{
		x = a;
		y = b;
	}
	void set(int a,  int b) 
	{
		x = a;
		y = b;
	}
	void print()
	{
		std::println("{}, {}", x, y);
	}
};

int main()
{
	Point p{1, 2};
	p.print();
}

