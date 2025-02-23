#include <print>

struct Rect 
{
	int left;
	int top;
	int right;
	int bottom;

	int get_area( )
	{
		return (right - left) * (bottom - top);
	}

	void draw()
	{
		std::println("draw rectangle");
	}	
};



int main()
{
	Rect rc = {1,1,10,10};
//	int n = get_rect_area(rc);
	int n = rc.get_area();

//	draw_rect(rc);
	rc.draw();
}


