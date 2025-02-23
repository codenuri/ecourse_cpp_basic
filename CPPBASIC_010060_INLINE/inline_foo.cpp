#include <print>

inline 
int add(int a, int b) { return a + b;}

void foo()
{
	add(1,2);
	std::println("foo : {}", 
	reinterpret_cast<void*>(&add));
}
