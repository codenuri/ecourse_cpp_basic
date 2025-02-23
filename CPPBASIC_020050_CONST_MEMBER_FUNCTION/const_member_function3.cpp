#include <print>

class Point 
{
	int x{0};
	int y{0};
public:	
	void f1() 
	{
		x = 10; // ok
	}
	void f2() const 
	{
		x = 10; // error
	}
};
int main()
{
	const Point cpt;
	cpt.f1(); // f1(&cpt)  error
	cpt.f2(); // f2(&cpt)  ok

	Point pt;
	pt.f1(); // ok
	pt.f2(); // ok
}
