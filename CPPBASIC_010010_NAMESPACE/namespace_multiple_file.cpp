#include "Audio.h"
#include "Video.h"

int main()
{
	// Audio.h(cpp)
	Audio::init();

	// Video.h(cpp)
	Video::init();
	Audio::change_codec();	
}
