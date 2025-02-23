int main()
{
	const int c = 10;

	// const int* => int*
	int* p1 = &c;			// error
	int* p2 = (int*)&c;		// ok

	int* p3 = static_cast<int*>(&c);		// error	
	int* p4 = reinterpret_cast<int*>(&c);	// error
	int* p5 = const_cast<int*>(&c);			// ok 
	
	*p5 = 20; 	// undefined 

	//-------------------------------
	int n = 10;	// non-const

	const int* p = &n;

	int* p6 = p;	// error
	int* p7 = const_cast<int*>(p); // ok

	*p7 = 20;  // ok
}