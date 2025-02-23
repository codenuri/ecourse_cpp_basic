int main()
{
	const int c = 10;

	char* p1 = (char*)&c;	// ok

	char* p3 = static_cast<char*>(&c);		// error
	char* p4 = reinterpret_cast<char*>(&c);	// error
	char* p5 = const_cast<char*>(&c);		// error
}