#include <stdio.h>

namespace Audio
{
	void init()  { printf("init Audio\n"); }
	void reset() { printf("reset Audio\n"); }
}

int main()
{
	// #1. qualified name
	Audio::init();

	// #2. using declaration
	using Audio::init;	
	init();		// ok
	reset();	// error

	// #3. using directive
	using namespace Audio;	
	init();		// ok
	reset();	// ok	
}