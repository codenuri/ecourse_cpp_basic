#include <stdio.h>

namespace Audio
{
	void init()  { printf("init Audio\n"); }
}

void init()  	{ printf("init global\n"); }

int main()
{
	// using declaration inside function
	using Audio::init;

	init();		// Audio::init
	::init();   // global init

}

