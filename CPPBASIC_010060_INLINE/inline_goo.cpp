#include <print>

inline 
int add(int a, int b) {	return a + b;}

void goo()
{
	add(1,2);
	std::println("goo : {}", 
	reinterpret_cast<void*>(&add));
}
