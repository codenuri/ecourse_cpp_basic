#include <print>

int main()
{
	int arr[5] = {1, 2, 3, 4, 5};
	
	for( int i = 0; i < 5; i++)
	{
	}

	// C++11 range-based for
	for( auto e : arr )
	{
		std::print("{}, ", e);
	}
}

