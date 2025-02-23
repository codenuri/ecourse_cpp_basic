#include <filesystem>
#include <algorithm>

int main()
{
	int x[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
	
	std::ranges::sort(x);	

	namespace s = std;
	namespace rg = std::ranges;

	s::ranges::sort(x);
	rg::sort(x);
}
