#include <filesystem>
#include <algorithm>

int main()
{
	int x[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};

	int ret = std::max(3, 1);

	std::filesystem::create_directory("C:\\AAA");

	std::ranges::sort(x);
}
