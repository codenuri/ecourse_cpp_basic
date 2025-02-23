class Point 
{
public:
	int x;
	int y;

	Point(int x, int y) : x{x}, y{y} {}
};

Point& f1()		// 잘못된 코드
{
	Point pt{1,2};
	return pt;
}

Point& f2()
{
	static Point pt{1,2};
	return pt;
}

int main()
{
}