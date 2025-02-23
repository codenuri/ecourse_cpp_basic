
const     int a1 = 10; // ok
constexpr int b1 = 10; // ok
constinit int c1 = 10; // ok

int n = 10;
const     int a2 = n; // ok
constexpr int b2 = n; // error
constinit int c2 = n; // error

int main() 
{
	a1 = 20; // error
	b1 = 20; // error 
	c1 = 20; // ok	 
}