template<typename T1, typename T2>
auto add(T1 a, T2 b) -> decltype(a + b)
{
	return a + b;
}

int main()
{
	auto f = [](int a, int b) -> int { return a + b;};
}
