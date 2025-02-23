#include <print>

int square_int(int n) 
{
	return n * n;
}

double square_double(double d) 
{
	return d * d;
}

int main()
{
	std::println("{}", square_int(2));	
	std::println("{}", square_double(2.1));
}