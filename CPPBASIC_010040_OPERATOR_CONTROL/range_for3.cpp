#include <print>
#include <ranges>

int main()
{
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	for( auto e : arr )
		std::print("{}, ", e);

	std::println();

	auto rarr = std::views::reverse(arr);

	for( auto e : rarr )
		std::print("{}, ", e);

	std::println();

	for( auto e : std::views::reverse(arr) )
		std::print("{}, ", e);

	std::println();
}