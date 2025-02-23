#include <print>
#include <type_traits>

template<typename T>
void printv(T v)
{
	if constexpr( std::is_pointer_v<T> )
	{
		std::println("*v : {}", *v);
	}
	else
	{
		std::println("v : {}", v);
	}
}
int main()
{
	int n = 10;
	printv(&n);
	printv(n);	
}