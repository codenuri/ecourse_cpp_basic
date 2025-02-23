#include <print>

void init_range(int* p, int cnt, int value)
{
	for( int i = 0; i < cnt; i++)
	{
		*(p+i) = value;
	}
}

int main()
{
	int x[5] = {1,2,3,4,5};

	init_range(x + 2, 2, 0);

	for( auto e : x)
	{
		std::print("{}, ", e);
	}
}