#include <iostream>
#include "MusicBox.h"

using namespace std;

// implementation of the default MusicBox constructor
MusicBox::MusicBox()
{
	song = "?";
	width = 0;
	
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
	cout << "Hi, I'm " << name << " and I'm a " << species ;
	cout << ", munching " << fav_food_quantity << " tons of " ;
	cout << fav_food << ", my favorite food!" << endl;
}		

// implementation of the default Panda destructor
Panda::~Panda()
{
}
