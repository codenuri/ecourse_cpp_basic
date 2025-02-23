int main()
{
	int n1 = 10;
	
	auto a1 = 10;		// int    a1 = 10;
	auto a2 = 3.4;		// double a2 = 3.4;
	auto a3 = 3.4f;		// float  a3 = 3.4;

	auto a4;	// error

	*a1 = 0;
	*a2 = 0;
	*a3 = 0;
}