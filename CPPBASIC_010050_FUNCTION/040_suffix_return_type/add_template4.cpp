template<typename T1, typename T2>
//decltype(a + b) add(T1 a, T2 b) 
auto add(T1 a, T2 b) ->decltype(a + b)
{
	return a + b;
}

int main()
{
	auto r1 = add(1, 2.1);

//	a = 10; // error
//	int a;
//	a = 10; // ok

}
