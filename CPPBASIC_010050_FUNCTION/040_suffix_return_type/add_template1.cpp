int add(int a, int b)
{
	return a + b;
}

int main()
{
	auto r1 = add(1, 2);	  // ok

	auto r2 = add(1.1, 2.1);  // bug
}

