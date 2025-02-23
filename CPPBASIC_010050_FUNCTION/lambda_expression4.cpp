int main()
{
	auto f1 = [](int a, double b) { return a + b;}; // ok
	
	auto f2 = [](int a, double b) { 
				if ( a == 0) return b;return a + b;}; // ok

	auto f3 = [](int a, double b) -> double { 
				if ( b == 0) return a;return a + b;};
				
}



