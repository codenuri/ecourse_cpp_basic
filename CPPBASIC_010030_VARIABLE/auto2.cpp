#include <functional>

void foo(int a, int b, int c) {}

int main()
{
//	float x[3] = {1.1, 2.2, 3.3};	
	double x[3] = {1.1, 2.2, 3.3};	

	float f = x[0];
	auto  a = x[0];


	auto f1 = std::bind(&foo, 1, 2, 3);


	auto f2 = [](int a, int b){ return a + b;};
}