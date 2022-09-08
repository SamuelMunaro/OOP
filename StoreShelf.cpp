#include <iostream>
#include "StoreShelf.h"
#include "MusicBox.h"

using namespace std;

// main program
int main()
{
	StoreShelf *one;
	one = new StoreShelf(30);
	one->get_width();
    one->get_num_music_boxes(); 
}