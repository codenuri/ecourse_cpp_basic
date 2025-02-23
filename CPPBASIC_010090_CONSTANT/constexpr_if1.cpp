template<typename T>
void foo(T arg)
{
//	*arg = 0;	// error	

//	if ( false )
//		*arg = 0;	// error

	if constexpr ( false )
		*arg = 0;	
}

int main()
{	
	int n = 10;
	foo(n);
}



