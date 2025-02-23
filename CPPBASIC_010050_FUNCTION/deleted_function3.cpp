#include <print>

double gcd(double a, double b) = delete;

int gcd(int a, int b) 
{
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
	auto ret1 = gcd(9.9, 3.3);	
}

