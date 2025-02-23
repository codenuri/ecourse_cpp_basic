#include <print>

struct Rect 
{
	int left;
	int top;
	int right;
	int bottom;
};

int get_rect_area( const Rect& rc)
{
	return (rc.right - rc.left) * (rc.bottom - rc.top);
}

void draw_rect(const Rect& rc)
{
	std::println("draw rectangle");
}

int main()
{
	Rect rc = {1,1,10,10};
	int n = get_rect_area(rc);

	draw_rect(rc);
}


