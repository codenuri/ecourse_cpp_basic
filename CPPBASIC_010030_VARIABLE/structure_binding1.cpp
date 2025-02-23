struct Point3D
{
	int x;
	int y;
	int z;
};

int main()
{
	Point3D p3d = {1, 2, 3};

	auto [a1, a2, a3] = p3d;


	int arr[3] = {1, 2, 3};

	auto [b1, b2, b3] = arr;
}