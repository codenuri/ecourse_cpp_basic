class Point 
{
public:
	int x;
	int y;

	Point(int x, int y) : x{x}, y{y} {}
};

Point pt{1, 2};

Point  f1() { return pt;}
Point& f2() { return pt;}

int main()
{
//	f1().x = 10; // error	
	f2().x = 10; // ok  "pt.x = 10"
}