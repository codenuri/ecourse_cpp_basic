#include <string>
#include <vector>
#include <chrono>
#include <complex>

int main()
{
	using namespace std::literals;

	auto s1 = "hello";  // const char* s1
	auto s2 = "hello"s; // std::string s2

	auto a1 = 3;
	auto a2 = 3s;	// std::chrono::seconds a3{3}
	auto a3 = 3ns;	
	auto a4 = 3min;
	auto a5 = 3i;  

	std::vector<int> v1 = {1,2,3};
	std::vector v2 = {1, 2, 3};		// vector<int>
	std::vector v3 = {1s, 2s, 3s};  // vector<std::chrono::seconds>

	std::vector v4 = {"alice",  "john",  "robert"};
					// vector<const char*>
	
	std::vector v5 = {"alice"s, "john"s, "robert"s};
					// vector<std::string>
}