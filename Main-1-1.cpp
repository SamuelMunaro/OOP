#include <iostream>
#include "MusicBox.h"

using namespace std;

// main program
int main()
{
	MusicBox *one, *two;
	one = new MusicBox("fireflys", 3);
	one->get_song();
	one->get_width();
}