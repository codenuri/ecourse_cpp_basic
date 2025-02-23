int main()
{
	std::pair<int, double> p1(1, 3.4);
	std::pair<int, double> p2{1, 3.4};
	std::pair p3{1, 3.4};
	std::pair p4;
	std::pair<int, double> p5;

	auto p6 = std::make_pair(1, 3.4);

	std::pair p7{1, 3.4};

	std::println("{}", p7.first);
	std::println("{}", p7.second);
}