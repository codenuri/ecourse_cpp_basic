#include <vector>
#include <print>
#include <iostream>

class Shape 
{
	int color;
public:
	virtual void f1() {}
};

class Rect : public Shape
{
public:
	void draw() const { std::println("draw rect"); }
};

class Circle : public Shape
{
public:
	void draw() const { std::println("draw circle"); }
};
class Triangle : public Shape
{
public:
	void draw() const { std::println("draw triangle"); }
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
			{
				if ( typeid(*p) == typeid(Rect) )
				{
					static_cast<Rect*>(p)->draw();
				}
				else if ( typeid(*p) == typeid(Circle) )
				{
					static_cast<Circle*>(p)->draw();
				}
			}

		}
	}	
	
}
