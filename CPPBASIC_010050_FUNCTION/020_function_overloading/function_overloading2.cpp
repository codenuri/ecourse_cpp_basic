void f1(int a)    {}
void f1(double a) {}

void f2(int a)        {}
void f2(int a, int b) {}

void f3(int a)            {}
void f3(int a, int b = 0) {}  // ok

int   f4(int a) { return 0;}
float f4(int a) { return 0;} 	// error 

int main()
{
	f3(1, 2);	// ok
	f3(1);		// error

	f4(1);
}