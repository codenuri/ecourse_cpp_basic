constexpr int factorial(int n)
{
	return n == 1 ? 1 : n * factorial(n-1);
}

int main()
{
	int n = 5;

	constexpr int c1 = factorial(5); // 120
//	constexpr int c2 = factorial(n); // error
	
	int c3 = factorial(n); // ok. runtime 
	int c4 = factorial(5); // ok 

	constexpr int c5 = factorial(5);
	const     int c6 = factorial(5);
	
	int arr[factorial(5)];
}
