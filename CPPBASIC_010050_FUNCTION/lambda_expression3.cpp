#include <print>
#include <vector>
#include <algorithm>

int main()
{
	std::vector v{1, 2, 3, 4, 5};

	// #1
	std::ranges::for_each(v,  
			[](int n) { std::print("{}, ", n);} );


	// #2.
	auto f = [](int a, int b) { return a + b;};

	std::println("{}", f(1, 2)); // 3
}



