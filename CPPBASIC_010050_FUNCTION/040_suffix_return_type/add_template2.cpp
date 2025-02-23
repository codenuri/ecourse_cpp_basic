template<typename T>
T add(T a, T b)
{
	return a + b;
}

int main()
{
	auto r1 = add(1,   2);    // ok
	auto r2 = add(1.1, 2.1);  // ok

	auto r3 = add(1, 2.1);  // error

	auto r4 = add<double>(1, 2.1);  // ok

}