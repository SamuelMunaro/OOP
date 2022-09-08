#include <iostream>
#include "MusicBox.h"

using namespace std;

// main program
int main()
{
	MusicBox *one;
	one = new Panda("fireflys",5);
	one->treat(3);
}