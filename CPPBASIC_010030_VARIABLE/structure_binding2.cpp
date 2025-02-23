#include <print>

struct Point 
{
	int x = 0;
	int y = 0;
};

Point center() 
{ 
	return {3, 4}; 
}

int main()
{
	auto pt = center();			// Point pt		
	auto [x, y] = center();		// int x
								// int y

	std::println("{}, {}", x, y); // 3, 4
}