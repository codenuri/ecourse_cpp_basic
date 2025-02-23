struct Point 
{
	int x;
	int y;
};

void  f1(int n)    {}
void  f2(Point pt) {}

Point f3() { return {1, 2}; }
Point f4() { return {}; }


int main()
{
	f1(3);		// int n = 3;	
	f1({3});	// int n = {3};
	f2({1,2});  // Point pt = {1, 2}
	f2({});		// Point pt = {}
}

