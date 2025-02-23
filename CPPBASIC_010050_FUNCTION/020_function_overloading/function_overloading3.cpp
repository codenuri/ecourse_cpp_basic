#include <print>

void foo(char   arg) { std::println("char");}
void foo(int    arg) { std::println("int");}
//void foo(float  arg) { std::println("float");}
//void foo(double arg) { std::println("double");}

int main()
{
	foo(3.4f);	// 1. float
				// 2. double
				// 3. error
				
				
}