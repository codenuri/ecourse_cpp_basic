int main()
{
	int n1 = 3.4;   // ok 

	int n2{3.4};	// error
	int n3 = {3.4};	// error

	char c1 = 500;	// ok
	char c2 = {500};// error
	char c3 = {128};// error
	char c4 = {127};// ok
}