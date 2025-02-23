#include <print>

void foo(int n)
{
	n = 0;
}

int main()
{
	int a = 10;

	foo(a);

	std::println("{}", a); // 10
}
