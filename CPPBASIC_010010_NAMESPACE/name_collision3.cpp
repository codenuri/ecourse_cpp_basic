#include <stdio.h>

namespace Audio
{
	void init()  { printf("init Audio\n"); }
}

void init()  	{ printf("init global\n"); }

// using declaration outside function
using Audio::init;

int main()
{
	init();		// 
//	::init();	// 
}

