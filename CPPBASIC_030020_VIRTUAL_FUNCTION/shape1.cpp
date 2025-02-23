#include <vector>
#include <print>
#include <iostream>

class Shape 
{
	int color;
public:
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

int main()
{
//	std::vector<Rect*>   v1;
//	std::vector<Circle*> v2;
	std::vector<Shape*> v;
}
