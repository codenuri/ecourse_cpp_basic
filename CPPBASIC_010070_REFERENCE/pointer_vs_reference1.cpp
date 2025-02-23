int main()
{
	int n1 = 10;
	int n2 = 20;

	int* p = &n2;
	int& r = n2;

	auto ret1 = *p;	// read n2
	auto ret2 = r;	// read n2

	// #1.
	p = &n1;	// 대상체 변경
	r = n1;		// 대상체 변경 아니고 값의 대입

	// #2.
	int* p1;			// ok	
	int* p2 = nullptr;	// ok

	int& r1;			// error
	int& r2 = nullptr;	// error
	int& r3 = n1;		// ok
}

void call_by_pointer(int* p)
{
	if ( p != nullptr )
		++(*p);
}

void call_by_reference(int& r)
{
	++r;
}

call_by_pointer(nullptr);	// ok
call_by_reference(nullptr);	// error