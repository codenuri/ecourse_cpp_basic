int x = 0;

int& f1() 
{
	return x;
}

int& f2() 
{
	static int s = 0;
	return s;
}

int& f3()	// bug...
{
	int n = 0;
	return n;
}

int main()
{
	f3() = 10;
}