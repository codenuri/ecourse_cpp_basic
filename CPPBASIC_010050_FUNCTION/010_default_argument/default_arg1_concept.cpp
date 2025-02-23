#include <print>

void foo(int a, int b = 0, int c = 0)
{
	std::println("{}, {}, {}", a, b, c);
}

int main()
{
	foo(1, 2, 3);	
	foo(1, 2);		
	foo(1);			

//	foo();	// error		
}
