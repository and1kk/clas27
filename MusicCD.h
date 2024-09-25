#pragma once
#include <iostream>
#include "item.h"

class MusicCD:public Item
{
protected:
	int duration;
public:
	MusicCD();
	MusicCD(string title, string author, int year, float price, int duration);
	void setDuration(int duration);
	int getDuration()const;
	void showInfo()const;
};

