#include <print>

int main()
{
	int  n = 10;
	int& r = n;

	r = 20;

	std::println("{}", n);	// 20

	std::println("{}", reinterpret_cast<void*>(&n));
	std::println("{}", reinterpret_cast<void*>(&r));
}
