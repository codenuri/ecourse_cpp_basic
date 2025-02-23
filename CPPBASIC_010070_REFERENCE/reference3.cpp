#include <print>

void add_one_1(int  n) { ++n; }
void add_one_2(int* p) { ++(*p); }
void add_one_3(int& r) { ++r; }

int main()
{
	int a = 1, b = 1, c = 1;

	add_one_1( a );
	add_one_2( &b );
	add_one_3( c );

	std::println("{}", a); // 1
	std::println("{}", b); // 2
	std::println("{}", c); // 2
	
}