int add1(int a, int b)
{
	return a + b;
}

inline int add2(int a, int b)
{
	return a + b;
}

int main()
{
	int n1 = add1(1, 2);
	int n2 = add2(1, 2);

	
//	int(*f)(int, int) = &add2;
//	if( 실행시간결과 ) f = &add1;
//	f(1, 2);
}