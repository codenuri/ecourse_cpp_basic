#include <vector>

int main()
{
	int x[4] = {1, 2, 3, 4};
	x[0] = 3;

	
	std::vector v = {1, 2, 3, 4};
	v[0] = 3;

	v.resize(8);
	
	auto sz = v.size();
}