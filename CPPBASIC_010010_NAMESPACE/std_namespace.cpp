#include <stdio.h>
#include <algorithm>

int main()
{
	int n1 = std::max(3, 1);
	int n2 = std::min(3, 1);

	printf("%d, %d\n", n1, n2);
}
