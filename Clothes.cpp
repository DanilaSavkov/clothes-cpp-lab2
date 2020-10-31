#include "Clothes.h"

Clothes::Clothes()
{
	this->brand = "";
	this->color = "";
	this->size = NULL;
	//cout << "Clothes default constructor" << endl;
}

Clothes::Clothes(string brand, string color, int size)
{
	this->brand = brand;
	this->color = color;
	this->size = size;
	//cout << "Clothes constructor" << endl;
}

string Clothes::getBrand()
{
	return brand;
}

string Clothes::getColor()
{
	return color;
}

int Clothes::getSize()
{
	return size;
}

void Clothes::setBrand(string brand)
{
	this->brand = brand;
}

void Clothes::setColor(string color)
{
	this->color = color;
}

void Clothes::setSize(int size)
{
	this->size = size;
}

string Clothes::thisToString()
{
	return "Brand: " + brand + "\n" + "Color: " + color + "\n" + "Size: " + to_string(size) + "\n";
}

string Clothes::boolToString(bool isHas)
{
	if (isHas) return "yes";
	else return "no";
}