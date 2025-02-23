constinit int g = 10;  // ok

int main()
{
	constinit static int s = 10; // ok

	constinit int n = 10;	// error
}
