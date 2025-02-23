#include <print>
#include <vector>
#include <algorithm>

void foo(int n) { std::print("{}, ", n );}

int main()
{
	int k = 3;	// 사용자 입력값

	std::vector v{1, 2, 3, 4, 5};

	std::ranges::for_each(v, foo);

	std::ranges::for_each(v,  
			[k](int n) { std::print("{}, ", n + k);}   );

}



