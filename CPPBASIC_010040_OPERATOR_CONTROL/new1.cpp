#include <cstdlib>

int main()
{
	int* p1 = (int*)malloc(sizeof(int));
							// 4
	free(p1);

	int* p2 = new int;
	delete p2;
}
