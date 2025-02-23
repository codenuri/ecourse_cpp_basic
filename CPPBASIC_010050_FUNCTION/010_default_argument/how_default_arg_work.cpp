void foo(int a, int b = 0, int c = 0)
{	
}

int main()
{
	foo(1, 2, 3);	

	foo(1);		// foo(1, 0, 0)		 
}

