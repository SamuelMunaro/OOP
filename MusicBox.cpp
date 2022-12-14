#include <iostream>
#include "MusicBox.h"
#include <string>

using namespace std;

// implementation of the default MusicBox constructor
MusicBox::MusicBox()
{
	song = "?";
	dimension = 0;
	
}

// implementation of a MusicBox constructor taking its width and song
MusicBox::MusicBox(std::string songname, int width)
{
	song = songname;
	dimension = width;
	
}

// implementation of the MusicBox get width
int MusicBox::get_width()
{
    return dimension;
}		

// implementation of the MusicBox treat function
string MusicBox::get_song()
{
    return song;
}

// implementation of the default MusicBox destructor
MusicBox::~MusicBox()
{
}
