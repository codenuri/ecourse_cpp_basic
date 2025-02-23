constexpr int add1(int a, int b) { return a + b;}
consteval int add2(int a, int b) { return a + b;}

int main()
{
	int a = 1, b = 2;

	constexpr int c1 = add1(1, 2); // ok. compiletime
	constexpr int c2 = add2(1, 2); // ok. compiletime

	int c3 = add1(1, 2); // ok compiletime or runtime
	int c4 = add2(1, 2); // ok compiletime

	int c5 = add1(a, b); // ok runtime
	int c6 = add2(a, b); // error
}