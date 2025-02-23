#include <concepts>

// template<class T>
template<typename T>
T square1(T a)
{
	return a * a;
}

// C++20 ~ 
auto square2(auto a)
{
	return a * a;
}

// constraint #1
template<std::integral T>
T square3(T a)
{
	return a * a;
}

// constraint #2
auto square4(std::integral auto a)
{
	return a * a;
}

int main()
{
	
}