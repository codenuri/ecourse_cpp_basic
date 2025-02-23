#include <iostream>
#include <iomanip>

int main()
{
	double d1 = 1.123456789;
	double d2 = 12.123456789;					

	std::cout << d1 << std::endl;   // 1.12346
	std::cout << d2 << std::endl;   // 12.1235

	double pi = 3.1415926535;
	std::cout << pi << std::endl;
}
