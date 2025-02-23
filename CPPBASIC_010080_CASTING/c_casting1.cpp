int main()
{
	float  f = 3.4f;

	
	double d = f;		// implcit casting		

	int   n1 = f;		// implcit casting		

	int   n2 = (int)f;	// explicit casting


	int* p1 = 1000;			// error.
	int* p2 = (int*)1000;	// ok
}
