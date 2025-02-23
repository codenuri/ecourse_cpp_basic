#include <print>

void foo(int a, int b)
{
	std::println("foo({}, {})", a, b);
}

void(* f1()  )(int, int)
{
	return &foo;
}

auto f2() -> void(*)(int, int)
{
	return &foo;
}

int main()
{
	f1()(1,2);
	f2()(1,2);
}