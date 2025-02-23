#include <stdio.h>

namespace Audio
{
	void init()  { printf("init Audio\n"); }
}

void init()  	{ printf("init global\n"); }

// using directive outside function
using namespace Audio;

int main()
{
//	init();		// error
	::init();	// global
}

