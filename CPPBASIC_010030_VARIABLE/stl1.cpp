#include <print>
#include <cstring>
#include <string>
#include <vector>

int main()
{
	int n = 10;

	std::string s = "hello";

	std::println("{}", s.size() ); // 5

	int    x1[5] = {1, 2, 3, 4, 5};
	double x2[3] = {1.1, 2.2, 3.3};

	std::vector<int>    v1 = {1, 2, 3, 4, 5};
	std::vector<double> v2 = {1.1, 2.2, 3.3};

	v1.resize(10);
	v2.resize(10);
}
