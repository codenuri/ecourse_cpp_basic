struct Packet
{
	int cmd;
	char data[1020];
};

void parse_packet(const Packet& p)
{
//	p.cmd = 10;	// error
}

int main()
{
	Packet packet{1, 0};

	parse_packet(packet);

	//....
}
