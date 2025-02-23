int main()
{
	int n = 0;

	n = 10;		// ok		n : lvalue
	3 = 10; 	// error	3 : rvalue 

	int& r1 = n;	// ok
	int& r2 = 3;	// error

	int&& r3 = n;	// error
	int&& r4 = 3;	// ok

	const int& r5 = n;	// ok
	const int& r6 = 3;	// ok
}