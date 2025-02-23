int main()
{
	auto a1 = 1 + 3.4;		// double a1 = 4.4;	

	decltype(1 + 3.4) d1;	// double d1;



	const int c = 10;

	auto a2 = c;	// int a2 = c;	
//	decltype(c) d2; // const int d2;  error.
	decltype(c) d2 = 0; // ok


	int x[3] = {1,2,3};

	auto a3 = x;		// int* a3 = x;
	decltype(x) d3;		// int d3[3];
}