int main()
{
	const     int c1 = 10;
	constexpr int c2 = 10;

	c1 = 20;	// error	
	c2 = 20;	// error


	int n = 10;

	const     int c3 = n;  // ok
	constexpr int c4 = n;  // error
}
