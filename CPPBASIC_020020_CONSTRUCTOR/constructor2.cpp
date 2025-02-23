#include <print>

class Point 
{
	int x;
	int y;	
public:
//	Point()  			{ x=0; y=0; std::println("1");}
	Point(int a, int b)	{ x=a; y=b; std::println("2");}
};

int main()
{
	Point p1;
	Point p2(1, 2);

//	Point p3{1, 2};		// C++11
//	Point p4 = {1, 2};	// C++11
}
