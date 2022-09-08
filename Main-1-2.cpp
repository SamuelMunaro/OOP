#include <iostream>
#include "StoreShelf.h"
#include "MusicBox.h"
#include <string>

using namespace std;

// implementation of the default StoreShelf constructor
StoreShelf::StoreShelf()
{
	size = 0;
}

// implementation of a StoreShelf constructor taking its width and song
StoreShelf::StoreShelf(int width)
{
	size = width;
	
}

// implementation of the MusicBox get width
int StoreShelf::get_width(); 
{
    return size;
}		

// implementation of the MusicBox treat function
int StoreShelf::get_num_music_boxes(); 
{
    size / dimension;
}

// implementation of the default MusicBox destructor
MusicBox::~MusicBox()
{
}
