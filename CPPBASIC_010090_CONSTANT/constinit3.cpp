constexpr int factorial(int n)
{
	return n == 1 ? 1 : n * factorial(n-1);
}

int g1 = 10;	// ok
int g2 = g1;	// ok

int g3 = factorial(5);
int g4 = g3;

constinit int g5 = factorial(5);
int g6 = g5;

int main()
{

}
