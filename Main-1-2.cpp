#include <iostream>
#include "StoreShelf.h"
#include <string>

using namespace std;

// implementation of the default StoreShelf constructor
StoreShelf::StoreShelf()
{
	dimension = 0;
	boxWidth = 5;
}

// implementation of a StoreShelf constructor taking its width and song
StoreShelf::StoreShelf(int width)
{
	dimension = width;
	
}

// implementation of the MusicBox get width
int StoreShelf::get_width(); 
{
    return dimension;
}		

// implementation of the MusicBox treat function
int StoreShelf::get_num_music_boxes(); 
{
    
}

// implementation of the default MusicBox destructor
MusicBox::~MusicBox()
{
}
