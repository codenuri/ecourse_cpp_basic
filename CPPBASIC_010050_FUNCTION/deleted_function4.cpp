#include <print>
#include <concepts>

template<std::integral T>
T gcd(T a, T b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
	std::println("{}", gcd(9, 6));		// ok	
	std::println("{}", gcd(9.9, 3.3));	// error
}