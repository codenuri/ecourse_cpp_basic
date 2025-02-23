#include <cstdlib>

int main()
{
	int n = 0;
	const int c = 0;
	double d = 3.4;

	int  n1 = static_cast<int>(d);		// ok
						// double => int

	int* p1 = static_cast<int*>(malloc(20));	// ok	
						// void* => int*

	double* p2 = static_cast<double*>(&n);		// error
						// int* => double*
	
	int*    p3 = static_cast<int*>(&c);			// error
						// const int* => int*

	free(p1);
}
