#include <vector>

class Shape 
{ 
public:  
	int color;
};
class Rect : public Shape 
{ 
public:
	 int x, y, width, height;
};
class Circle : public Shape
{
public:
	int x, y, radius;
};

//--------------------------------
//void change_gray_color(Rect* p)
void change_gray_color(Shape* p)
{
	p->color = 0xf2f2f2;
}

int main()
{
	Rect   r;
	Circle c;
	change_gray_color(&r);
	change_gray_color(&c);

	std::vector<Rect*> v1;
	std::vector<Shape*> v2;
}