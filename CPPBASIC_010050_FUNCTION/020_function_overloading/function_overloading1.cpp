#include <print>

int square(int n) 
{
	return n * n;
}

double square(double d) 
{
	return d * d;
}

int main()
{
	std::println("{}", square(2));	
	std::println("{}", square(2.1));
}