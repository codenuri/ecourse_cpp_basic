#include <vector>
#include <print>
#include <iostream>

class Shape 
{
	int color;
public:

	virtual ~Shape() {}

	void set_color(int c) { color = c;}

	virtual int get_area() const { return 0;}

	virtual void draw() const { std::println("draw shape"); }
};

class Rect : public Shape
{
public:
	void draw() const override { std::println("draw rect"); }
};

class Circle : public Shape
{
public:
	void draw() const override { std::println("draw circle"); }
};

int main()
{
	std::vector<Shape*> v;

	while( true )
	{
		int cmd;
		
		std::cin >> cmd;

		if      ( cmd == 1 ) v.push_back(new Rect);
		else if ( cmd == 2 ) v.push_back(new Circle);

		else if ( cmd == 9 )
		{
			for (auto p : v) 
				p->draw();
		}
	}	
	
}
