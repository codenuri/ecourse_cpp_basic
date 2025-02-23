struct Point 
{
	int x = 0;
	int y = 0;
};

int main()
{
	Point pt{1, 2};

	auto [x1, y1] = pt;		// ok	
	int  [x2, y2] = pt; 	// error

	auto [x3] = pt;			// error	
	auto [x4, y4] = pt;		// ok
	auto [x5, y5, z5] = pt;	// error

	const auto [x6, y6] = pt; // ok
	x6 = 0;		// error

	auto& [x7, y7] = pt;  // ok
}