void f1(int n) 
{
	int k = n;
}

void f2(const int& n) 
{
	int k = n; // *(n이 보관하는 내부주소)
}

int main()
{
	int a = 10;

	f1(a);
	f2(a);
}