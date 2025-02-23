int main()
{
	int n = 5;

	int x1[n]; 	// error

	constexpr int sz1 = 5;
	const 	  int sz2 = n;
	const     int sz3 = 5;

	int x1[sz1]; //	ok
	int x2[sz2]; // error	
	int x3[sz3]; // ok	
}

