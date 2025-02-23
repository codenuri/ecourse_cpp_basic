#include <print>

void foo();
void goo();

inline 
int add(int a, int b)
{
	return a + b;
}

int main()
{
	add(1,2);

	std::println("main : {}", 
	reinterpret_cast<void*>(&add));
	
	foo();
	goo();
}