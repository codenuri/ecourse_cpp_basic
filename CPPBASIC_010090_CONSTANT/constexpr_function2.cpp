#include <cstdlib>
#include <print>

constexpr int foo()
{
	std::println("hello");
	return 10;
}

int main()
{
	constexpr int c = foo();
}











constexpr int invalid1() 
{
    int x;
    std::cin >> x;	// 사용자 입력 X
    return x;
}

constexpr int* invalid2() 
{
	int* ptr = new int(42);  // 동적 메모리 할당 X
    return ptr;
}

constexpr int invalid3() 
{
    return rand();  // rand()는 런타임에만 결정됨
}

constexpr int invalid4() 
{
	// file read/write
	// network i/o
    return 0;
}
