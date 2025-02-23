#include <stdio.h>

namespace Audio
{
	void init() { printf("init Audio\n");	}	
}

namespace Video 
{
	void init()	{ printf("init Video\n");   }
}

// global namespace
void init()	{ printf("init System\n");	}

int main()
{
	Audio::init();
	Video::init();
	init(); 

}