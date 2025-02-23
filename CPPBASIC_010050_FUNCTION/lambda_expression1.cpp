#include <print>
#include <vector>
#include <algorithm>

void foo(int n) { std::print("{}, ", n);}

int main()
{
	std::vector v{1, 2, 3, 4, 5};

	std::ranges::for_each(v, foo);

	std::ranges::for_each(v,  
			[](int n) { std::print("{}, ", n);}   );

}
