#include "item.h"

Item::Item()
{
    title = "undefined";
    author = "undefined";
    year = 0;
    price = 0;
}

Item::Item(string title, string author, int year, float price)
{
    this->title = title;
    this->author = author;
    this->year = year;
    this->price = price;

}

string Item::getTitle() const
{
    return title;
}

void Item::setTitle(string Title)
{
    title = Title;
}

string Item::getAuthor() const
{
    return author;
}

void Item::setAuthor(string author)
{
    this->author = author;
}

int Item::getyear() const
{

    return year;
}

void Item::setYear(int year)
{
    this->year = year;
}

float Item::getPrice() const
{
    return price;
}

void Item::setPrice(float Price)
{
    price = Price;
}

void Item::showInfo() const
{
    cout << "title:" << title << endl;
    cout << "author:" << author << endl;
    cout << "year:" << year << endl;
    cout << "price:" << price << endl;
}
