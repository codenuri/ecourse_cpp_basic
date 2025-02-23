auto add1(int a, double b) // ok
{
	return a + b;
}

auto add2(int a, double b) // ok
{
	if ( a == 0 ) return b;
	return a + b;
}

auto add3(int a, double b) // error	
{
	if ( b == 0 ) return a;
	return a + b;
}

auto add4(auto a, auto b)
{
	return a + b;
}

int main()
{
}