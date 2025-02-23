#include <print>

// #2. 디폴트 값은 함수의 선언에만 표기해야 한다.
void foo(int a, int b = 0, int c = 0);
void goo(int a, int b = 0, int c = 0);

int main()
{
	foo(1);		
	goo(1);	
}

void foo(int a, int b, int c)
{
	std::println("{}, {}, {}", a, b, c);
}

void goo(int a, int b /*=0*/, int c /*=0*/ )
{
	std::println("{}, {}, {}", a, b, c);
}
