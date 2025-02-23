int process() 
{ 
//  if ( 실패 ) return -1;

	return 10; 
}

int main()
{
	int ret1 = process();

	if ( ret1 != -1 )
	{
		// ret1 사용
	}	

	if ( int ret2 = process(); ret2 != -1 )
	{
		// ret2 사용
	}	// <== ret2

}









