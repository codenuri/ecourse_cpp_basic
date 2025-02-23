#include <print>

class Point 
{
	int x;
	int y;	
public:
	Point()  			{ x=0; y=0; std::println("1");}
	Point(int a, int b)	{ x=a; y=b; std::println("2");}
};

int main()
{
	Point p1[5];	// 1번 생성자 5회
	Point p2[5] = {{1,1}, {2,2}};	// 2번 2회, 1번 3회

	Point* p;

	p = (Point*)malloc(sizeof(Point));
						// 8
	free(p);

	p = new Point;
	delete p;

//	p = new Point(1, 2);
	p = new Point{1, 2};
	delete p;
}
