#include <print>

class Point 
{
public:	
	int x{0};
	int y{0};

	void set(int a, int b)
	{
		x = a;
		y = b;
	}
//	void print()
	void print() const
	{ 
//		x = 10; // error
		std::println("{}, {}", x, y);	
	}
};
int main()
{
	const Point pt;

	pt.x = 10;		// error
	pt.set(10, 20); // error
	pt.print();	    // ok
}
