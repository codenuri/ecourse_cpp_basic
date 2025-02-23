#include <stdio.h>

namespace Audio
{
	void init()  { printf("init Audio\n"); }
}

void init()  	{ printf("init global\n"); }

int main()
{
	// using directive inside function
	using namespace Audio;

//	init();		// error
	::init();	// global
}

