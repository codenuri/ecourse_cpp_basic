class Rect
{
	int x, y, width, height;
public:
	Rect(int x, int y, int w, int h)
		: x{x}, y{y}, width{w}, height{h} {}

	int get_area() const { return width * height;}
};

//void foo(Rect rc) 
void foo(const Rect& rc) 
{
	int n = rc.get_area();
}

int main()
{
	Rect rc{1, 1, 10, 10}; 

	int n = rc.get_area(); // ok

	foo(rc);
}