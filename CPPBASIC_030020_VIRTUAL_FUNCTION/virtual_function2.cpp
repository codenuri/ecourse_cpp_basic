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
    Rect  r;  

    Shape* p = &r;  

//	if( 사용자입력 == 1) p = &다른객체;

    p->draw();	// 이 순간의 원리 
}
