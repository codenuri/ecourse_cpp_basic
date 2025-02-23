#include <print>
#include <ranges>

int main()
{
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};


	for( auto e : std::views::take(arr, 3) ) // 1, 2, 3,
		std::print("{}, ", e);	 
	std::println();


	for( auto e : std::views::drop(arr, 3) ) // 4, 5, 6, 7, 8, 9, 10
		std::print("{}, ", e);	
	std::println();


	for( auto e : std::views::stride(arr, 2) ) // 1, 3, 5, 7, 9
		std::print("{}, ", e);	
	std::println();


	// (0, 0번째요소), (1, 1번째요소), (2, 2번째요소)
	for( auto e : std::views::enumerate(arr) ) // (0, 1), (1, 2)
		std::print("({}, {}), ", std::get<0>(e), std::get<1>(e));	
	std::println();


	// 중첩도 가능   10, 8, 6, 4, 2
	for( auto e : std::views::stride(std::views::reverse(arr), 2) )
		std::print("{}, ", e);	
	std::println();

	namespace V = std::views;
	for( auto e : V::stride(V::reverse(arr), 2) )
		std::print("{}, ", e);	
	std::println();	

}