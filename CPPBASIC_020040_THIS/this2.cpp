#include <print>

class Point
{
	int x{0};
	int y{0};
public:
	void set(int a, int b)
	{
		this->x = a;
		y = b;
	
		std::println("this : {}", 
			reinterpret_cast<void*>(this));	

//		this = nullptr; // error
//		++this;   		// error
//		3 = 10; // error
	}
};

int main()
{
	Point pt1;
	Point pt2;

	std::println("&pt1 : {}", reinterpret_cast<void*>(&pt1));
	std::println("&pt2 : {}", reinterpret_cast<void*>(&pt2));

	pt1.set(10, 20);
	pt2.set(10, 20);
}