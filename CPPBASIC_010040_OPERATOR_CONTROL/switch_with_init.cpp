int process() 
{ 
	return 10; 
}

int main()
{
	int ret1 = process();

	switch( ret1 )
	{
		case 1: break;
		case 2: break;
	}

	

	switch( int ret2 = process(); ret2 )
	{
		case 1: break;
		case 2: break;
	}
}