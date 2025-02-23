namespace Audio
{
	void audio_function() {}

	namespace Codec
	{
		void codec_function() {}
	}
	namespace Mixer
	{
		void mixer_function() {}
	}
}

int main()
{
	Audio::audio_function();
	Audio::Codec::codec_function();
	Audio::Mixer::mixer_function();

	/*
	using namespace Audio;
	audio_function();
	Codec::codec_function();
	Mixer::mixer_function();
	codec_function();	// error
	*/

	using namespace Audio::Codec;
	Audio::audio_function();
	codec_function();  //  ok
	Audio::Mixer::mixer_function();
	audio_function(); // error
}
