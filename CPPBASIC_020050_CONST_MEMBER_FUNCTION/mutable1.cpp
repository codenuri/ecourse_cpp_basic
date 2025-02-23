#include <format>
#include <string>
#include <print>

class Point 
{
	int x;
	int y;
public:
	Point(int x = 0, int y = 0) : x{x}, y{y} {}
	
	void set(int a, int b) { x = a; y = b;}

	std::string to_string() const
	{
		return std::format("{}, {}", x, y);
	}
};

int main()
{
	const Point pt{1, 2};

	std::println("{}", pt.to_string());
	std::println("{}", pt.to_string());
}