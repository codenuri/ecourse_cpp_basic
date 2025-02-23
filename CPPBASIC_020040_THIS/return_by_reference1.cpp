class Point 
{
public:
	int x;
	int y;

	Point(int x, int y) : x{x}, y{y} {}
};

// call by value vs call by reference
void f1(Point  p1) {}
void f2(Point& p2) {}

int main()
{
	Point pt{1, 2};

	f1(pt);
	f2(pt);
}