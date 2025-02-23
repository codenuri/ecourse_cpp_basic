#include <print>

constexpr std::pair<bool, int> add(int x, int y)
{	
	bool b = std::is_constant_evaluated();

	std::pair<bool, int> ret{b, x + y};
	return ret;
}

int main()
{
	int a = 1, b = 2;

	auto ret1 = add(a, b);	// runtime
	auto ret2 = add(1, 2);  // compile-time or runtime 
	constexpr auto ret3 = add(1, 2); // compile-time

	std::println("{}, {}", ret1.first, ret1.second);
	std::println("{}, {}", ret2.first, ret2.second);
	std::println("{}, {}", ret3.first, ret3.second);
}
