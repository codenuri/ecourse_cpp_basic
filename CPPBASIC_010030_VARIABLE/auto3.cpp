int main()
{
	const int c = 10;

	auto a1 = c;
//  const int a1 = c; => X
//  int a1 = c;       => O
	
	a1 = 20; // ok


	int x[3] = {1,2,3};

	auto a2 = x;	
//	int a2[3] = x;	// error		
//  int* a2 = x;    // ok 	
}