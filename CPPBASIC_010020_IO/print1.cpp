#include <print>

int main()
{
	std::print("hello");
	std::println("hello");


	int    n = 10;
	double d = 3.4;

	std::println("{}, {}", n, d);
	std::println("{0}, {1}, {0}", n, d); // 10, 3.4, 10

	// {} 자체를 출력하고 싶을때
//	std::println("{}");		// error
	std::println("{{}}");   // ok
}

