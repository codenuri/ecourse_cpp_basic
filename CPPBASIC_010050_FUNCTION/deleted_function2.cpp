#include <print>

/*
double gcd(double a, double b)
{
    return b == 0 ? a : gcd(b, a % b);	
} 
*/
double gcd(double a, double b);

int gcd(int a, int b) 
{
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
	auto ret1 = gcd(9, 3);		// int
//	auto ret2 = gcd(9.9, 3.3);	// error
								// call xxxx
}

