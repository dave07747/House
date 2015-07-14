#define NOMINMAX
#include <iostream>
#include <Windows.h>
#include "Intro Text Manager.h"

using namespace std;

void color()
{
	//Full Screen
	system("mode 650");
	HWND consoleWindow = GetConsoleWindow();
	SetWindowPos(consoleWindow, 0, -8, 0, 0, 0, SWP_NOSIZE | SWP_NOZORDER);


	// Remember how things were when we started
	char a = 'y';
	HANDLE hstdout = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(hstdout, &csbi);

	//Uncomment if there is a delay with sound again

		/*Sleep(1025);
		system("Color 3C");
		Sleep(1025);
		system("Color 4D");
		Sleep(1025);
		system("Color 5E");
		Sleep(1025);*/
		system("Color 1A");
		Sleep(1200);
		cout << endl;
		system("Color 2B");
		cout << endl;
		Sleep(1000);
		system("Color 3C");
		Sleep(1200);
		system("Color 4D");
		welcome();
		Sleep(725);
		system("Color 5E");
		cout << endl;
		Sleep(825);
		system("Color 6F");
		cout << endl;
		Sleep(825);
		system("Color A1");
		cout << endl;
		Sleep(825);
		system("Color B2");
		cout << endl;
		Sleep(180);
		system("Color C3");
		cout << endl;
		Sleep(180);
		system("Color D4");
		david();
		Sleep(900);
		system("Color E5");
		cout << endl;
		Sleep(1000);
		system("Color F6");
		christine();
		Sleep(1000);
		system("Color 1A");
		cout << endl;
		Sleep(825);
		system("Color 2B");
		zach();
		Sleep(825);
		system("Color 3C");
		cout << endl;
		Sleep(825);
		system("Color 4D");
		rohan();
		Sleep(825);
		system("Color 5E");
		cout << endl;
		Sleep(800);
		system("Color 6F");
		cout << endl;
		Sleep(300);
		system("Color A1");
		cout << endl;
		Sleep(200);
		system("Color B2");
		cout << endl;
		Sleep(900);
		system("Color C3");
		cout << endl;
		Sleep(1000);
		system("Color D4");
		cout << endl;
		Sleep(1100);
		cout << endl;
		system("Color E5");
		Sleep(800);
		cout << endl;
		system("Color F6");
		Sleep(800);
		begin();
		system("Color A1");
		cout << endl;
		Sleep(800);
		system("Color B2");
		cout << endl;
		Sleep(800);
		system("Color C3");
		cout << endl;
		Sleep(800);
		system("Color D4");
		cout << endl;
		Sleep(200);
		cout << endl;
		system("Color E5");
		Sleep(200);
		cout << endl;
		system("Color F6");
		Sleep(800);

	//Return colors to origional
	SetConsoleTextAttribute(hstdout, csbi.wAttributes);

}