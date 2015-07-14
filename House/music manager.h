#pragma comment(lib, "winmm.lib")
#include <Windows.h>
void audio()
{
	//Play Music
	PlaySound(TEXT("My Mini Mix.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
}
