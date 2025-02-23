#include <format>
#include <string>
#include <print>

class Point 
{
	int x;
	int y;

	mutable std::string cache;
	mutable bool cache_valid = false;	
public:
	Point(int x = 0, int y = 0) : x{x}, y{y} {}
	
	void set(int a, int b) { x = a; y = b;cache_valid = false; }


	std::string to_string() const
	{
		if ( cache_valid == false )
		{
			cache = std::format("{}, {}", x, y);
			cache_valid = true;
		}

		return cache;
	}
};

int main()
{
	const Point pt{1, 2};

	std::println("{}", pt.to_string());
	std::println("{}", pt.to_string());
}