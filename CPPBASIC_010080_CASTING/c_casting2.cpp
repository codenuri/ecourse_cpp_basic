#include <print>

int main()
{
	int n = 10;

	double* p1 = (double*)&n;

	*p1 = 3.4;



	const int c = 10;

	int* p2 = (int*)&c;
	*p2 = 20;

	std::println("{}", c); // 10 ? 20 ?
}
