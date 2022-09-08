#include <iostream>
#include "MusicBox.h"

using namespace std;

// implementation of the default MusicBox constructor
MusicBox::MusicBox()
{
	int song = "?";
	int width = 0;
	
}

// implementation of a MusicBox constructor taking its width and song
MusicBox::MusicBox(std::string songname, int width)
{
	song = songname;
	width = width;
	
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
