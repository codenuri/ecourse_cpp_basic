#include <print>

int main()
{
	long long n = 10;	
	
	bool b1 = true; 
	bool b2 = false; 	
	bool b3 = 3; 	// true

	std::println("{}", sizeof(n)); 	// 8	
	std::println("{}", sizeof(b1)); // 1	

	int* p1 = 0;		// bad
	int* p2 = nullptr;  // good
}
