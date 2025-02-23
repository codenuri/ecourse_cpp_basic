#include <print>
#include <vector>
#include <algorithm>

bool cmp(int a, int b) { return a > b; }


int main()
{
	std::vector v{1,3,5,7,9,2,4,6,8,10};

	std::ranges::sort(v, cmp );		

	for( auto e : v)
		std::print("{}, ", e);
	std::println();
}

