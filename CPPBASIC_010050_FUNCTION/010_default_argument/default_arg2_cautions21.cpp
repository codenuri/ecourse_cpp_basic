// #2-1. default value 함수 구현(정의)에만 표기하는 경우

void foo(int a, int b, int c);

int main()
{
	foo(1, 2, 3); // ok	
	foo(1);		  // error	
}

void foo(int a, int b = 0, int c = 0)
{
}
