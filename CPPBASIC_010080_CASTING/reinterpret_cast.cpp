int main()
{
	int n = 10;

	// int* => char*
	char* p1 = static_cast<char*>(&n);		// error
	char* p2 = reinterpret_cast<char*>(&n);	// ok

	// 정수 => 포인터
	int* p3 = 100;		// error
	int* p4 = static_cast<int*>(100);		// error
	int* p5 = reinterpret_cast<int*>(100);	// ok

	// 포인터 => 정수
	int  n1 = reinterpret_cast<int>(p5);	// ok

	// double => int
	int n3 = 3.4;		// ok
	int n4 = reinterpret_cast<int>(3.4);	// error. 

	// int* => double*
	double* p6 = reinterpret_cast<double*>(&n);
	*p6 = 3.4; 
}