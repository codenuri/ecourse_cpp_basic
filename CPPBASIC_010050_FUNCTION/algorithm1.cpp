#include <algorithm>
#include <string>
#include <print>

int main()
{
	std::string s1 = "aaa";
	std::string s2 = "cc";

	auto s3 = std::max(s1, s2);
	auto s4 = std::ranges::max(s1, s2);
	auto s5 = std::ranges::max(s1, s2, 
								{}, &std::string::size);

								

}
