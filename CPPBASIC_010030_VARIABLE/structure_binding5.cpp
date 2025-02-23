int foo() { return 0; }

int main()
{
	int _ = 10; 	// ok. C++98 ~ 

	int _ = 20;		// error. ~ C++23
					// ok     C++26 ~ 

	auto _ = foo();
}