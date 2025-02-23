int main()
{
	int n1 = static_cast<int>(3.4);	// C++
	int n2 = (int)3.4;				// C


	double* p1 = reinterpret_cast<double*>(&n1); // C++
	double* p2 = (double*)&n1;					 // C


	const int c = 10;
	int* p3 = const_cast<int*>(&c);	// C++
	int* p4 = (int*)&c;				// C
}
