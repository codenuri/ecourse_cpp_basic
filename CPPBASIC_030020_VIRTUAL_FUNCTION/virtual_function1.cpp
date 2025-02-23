#include <print>

class Shape
{
public:
    void draw() { std::println("draw shape"); }
};

class Rect : public Shape
{
public:
    void draw() { std::println("draw rect"); }
};

int main()
{
    Shape s;
    Rect  r;  
	
	s.draw(); 	// draw shape
	r.draw();  	// draw rect

    Shape* p = &r;  

    p->draw(); 	// draw shape
}
