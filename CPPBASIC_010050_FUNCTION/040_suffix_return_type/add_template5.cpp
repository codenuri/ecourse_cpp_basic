template<typename T1, typename T2>
auto add1(T1 a, T2 b) -> decltype(a + b)
{
	if ( b == 0 ) return a;
	return a + b;
}

template<typename T1, typename T2>
auto add2(T1 a, T2 b) 
{
//	if ( b == 0 ) return a;
	return a + b;
}

auto add3(auto a, auto b) 
{
	return a + b;
}

int main()
{
	auto r1 = add1(1, 3.1);
	auto r2 = add2(1, 3.1);
	auto r3 = add3(1, 3.1);
}
