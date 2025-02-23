#include <print>

std::pair<int, int> add_sub1(int a, int b)
{
	std::pair ret{a + b, a - b};
	return ret;
}

auto add_sub2(int a, int b)
{
	return std::make_pair(a + b, a - b);
}

int main()
{
	auto ret = add_sub1(3, 2);
	std::println("{}, {}", ret.first, ret.second);

	auto [s1, s2] = add_sub2(3, 2);
	std::println("{}, {}", s1, s2);	
}
