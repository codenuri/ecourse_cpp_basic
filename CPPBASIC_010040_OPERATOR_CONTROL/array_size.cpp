#include <iostream>
#include <cstdlib>

int main()
{
	int cnt = 10;

//	std::cin >> cnt;

//	int score[cnt]; // ?

	int* score = (int*)malloc(sizeof(int)*cnt);
	free(score);	

}
