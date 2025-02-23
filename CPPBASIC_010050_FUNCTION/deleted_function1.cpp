#include <print>

int gcd(int a, int b) 
{
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
	std::println("{}", gcd(9, 6));		// 3

	std::println("{}", gcd(9.9, 3.3));	// 3
}

