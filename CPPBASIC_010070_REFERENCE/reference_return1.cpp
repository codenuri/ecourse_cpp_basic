#include <print>

int x = 3;

int  f1() { return x; }
int& f2() { return x; }

int main()
{
//	f1() = 10; 	// "3 = 10" error
	f2() = 10;	// "x의별명 = 10" ok

	std::println("{}", x); // 10
}
