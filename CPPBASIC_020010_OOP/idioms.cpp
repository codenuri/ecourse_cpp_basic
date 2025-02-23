#include <print>

struct Rect 
{
	int left;
	int top;
	int right;
	int bottom;

	int get_area() { return (right - left) * (bottom - top);}
	void draw()    { std::println("draw rectangle"); }	
};

int main()
{
	int  n = 3; // "변" 하는 "수"
	n = 5;
	Rect r = {1, 1, 10, 10};

	Rect rc1 = {1, 1, 5, 5};
	Rect rc2 = {3, 3, 8, 8};
	Rect rc3 = {5, 5, 9, 9};

	std::println("{}", sizeof(rc1));
}


