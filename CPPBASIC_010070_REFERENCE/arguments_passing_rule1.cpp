void in_out_parameter(int* p) 	// so-so
{ 
	if ( p != nullptr )
		++(*p);
}
void in_out_parameter(int& r) 	// good
{ 
	++r;
}

//------------------------------
void in_parameter1(int n) 			// good		
{
	int k = n;
}
void in_parameter1(const int& n) 	// bad
{
	int k = n;
}
//-------------------------
struct Packet
{
	int cmd;
	char data[1020];
};
void in_parameter2(Packet p) 	// bad
{
	int k = p.cmd;
}
void in_parameter2(const Packet& p) // good
{
	int k = p.cmd;
}
