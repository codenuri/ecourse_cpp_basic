#include <cstdlib>

int main()
{
	int* p1 = new int;
	delete p1;

	int cnt = 10;
	int* p2 = new int[cnt];
	delete[] p2;
//	delete p2; // bug

	int* p3 = new int(3);
	int* p4 = new int{3};
	int* p5 = new int[3]{1, 2, 3};

	delete p3;
	delete p4;
	delete[] p5;
	
//	int* p6 = new int;
//	free(p6);	// bug
}