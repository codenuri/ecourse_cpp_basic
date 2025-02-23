#include <print>

class Shape
{
public:
    void draw1() { std::println("draw1 shape"); }
	virtual void draw2() { std::println("draw2 shape"); }
};

class Rect : public Shape
{
public:
    void draw1() { std::println("draw1 rect"); }
	virtual void draw2() { std::println("draw2 rect"); }
};

int main()
{
    Rect  r;  
    Shape* p = &r;  

    p->draw1();	// static binding
	p->draw2();	// dynamic binding
}
