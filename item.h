
#pragma once
#include <iostream>
#include <string>
using namespace std;
class Item
{
protected:
    string title;
    string author;
    int year;
    float price;
public:
    Item();
    Item(string title, string author, int year, float price);
    string getTitle()const;
    void setTitle(string Title);
    string getAuthor()const;
    void setAuthor(string author);
    int getyear()const;
    void setYear(int year);
    float getPrice()const;
    void setPrice(float Price);
    void showInfo()const;
};