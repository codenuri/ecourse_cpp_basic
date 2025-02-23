#include <vector>
#include <print>
#include <iostream>

class Shape 
{
	int color;
public:
	virtual ~Shape() {}
	virtual void draw() const  = 0;
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
				p->draw();	// 다형성 polymorphism
		}
	}	
}

