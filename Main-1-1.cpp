#include <iostream>
#include "MusicBox.h"

using namespace std;

// main program
int main()
{
	MusicBox *one;
	one = new MusicBox("fireflys",5);
	one->get_song();
	one->get_width();
}