#include <print>
#include <type_traits>

template<typename T>
void some_algorithm(T v)
{
	if constexpr( std::is_integral_v<T> )
	{
		// 정수에 최적화된 알고리즘
	}
	else if constexpr ( std::is_floating_point_v<T> )
	{
		// 실수에 최적화된 알고리즘
	}
	else if constexpr( std::is_pointer_v<T> )
	{
		// 포인터에 최적화된 알고리즘
	}
}
int main()
{
	some_algorithm(3);
}