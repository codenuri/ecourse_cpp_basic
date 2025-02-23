#include <print>

int main()
{
	int n  = 10;

	std::println("{0}",  n);   // 10
	std::println("{0:x}", n);  // a 	
	std::println("{:X}",  n);  // A	

	std::println("{:6}", n);   // "    10"	
	std::println("{:*<6}", n); // "10****"	
	std::println("{:*>6}", n); // "****10" 
	std::println("{:*^6}", n); // "**10**"  
	std::println("{:*^{}}", n, 10); // "****10****" 

//	std::println("{}", &n);	 // error
	std::println("{}", (void*)&n); // ok. C style캐스팅
	std::println("{}", reinterpret_cast<void*>(&n));

}
