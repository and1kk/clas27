#include "MusicCD.h"

MusicCD::MusicCD()
{
	duration = 0;
}

MusicCD::MusicCD(string title, string author, int year, float price, int duration)
	:Item(title, author, year, price)
{
	this->duration = duration;
}

void MusicCD::setDuration(int duration)
{
	this->duration = duration;
}

int MusicCD::getDuration() const
{
	return duration;
}

void MusicCD::showInfo() const

{
	Item::showInfo();
	cout << "duration: " << duration<<endl;
}


