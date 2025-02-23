struct Point3D
{
	int x;
	int y;
	int z;
};

int main()
{
	Point3D p{1, 2, 3};

	auto [x1, _, z1] = p; // ok
	auto [x2, _, z2] = p; // C++26 ~ ok
						  
}

