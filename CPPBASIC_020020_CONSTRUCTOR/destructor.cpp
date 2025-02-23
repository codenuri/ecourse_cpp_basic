#include <print>

class Point 
{
	int x;
	int y;	
public:
	Point()  			{ x=0; y=0; std::println("1");}
	Point(int a, int b)	{ x=a; y=b; std::println("2");}

	~Point() {	std::println("~Point()"); }
};

int main()
{
	{
		Point p1;
		Point p2{1, 2};

	} //<== p1, p2 파괴, 소멸자 호출

	std::println("---------");
} 	