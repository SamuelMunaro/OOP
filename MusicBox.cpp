#include <iostream>
#include "MusicBox.h"
#include <string>

using namespace std;

// implementation of the default MusicBox constructor
MusicBox::MusicBox()
{
	string song = "?";
	int width = 0;
	
}

// implementation of a MusicBox constructor taking its width and song
MusicBox::MusicBox(std::string songname, int width)
{
	string song = songname;
	int width = width;
	
}

// implementation of the MusicBox treat function
int MusicBox::get_width()
{
	cout << width << endl;
}		

// implementation of the MusicBox treat function
int MusicBox::get_song()
{
	cout << song << endl;
}	

// implementation of the default Panda destructor
MusicBox::~MusicBox()
{
}
