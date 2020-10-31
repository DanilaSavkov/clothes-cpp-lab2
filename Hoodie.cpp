#include "Hoodie.h"

Hoodie::Hoodie() : UpperBodyClothing()
{
	this->isHasZip = false;
}

Hoodie::Hoodie(string brand, string color, int size, bool isHasZip) : Clothes(brand, color, size), UpperBodyClothing(brand, color, size, true, true)
{
	this->isHasZip = isHasZip;
}

bool Hoodie::getIsHasZip()
{
	return isHasZip;
}

void Hoodie::setIsHasZip()
{
	this->isHasZip = isHasZip;
}

string Hoodie::toString()
{
	return UpperBodyClothing::toString() + Hoodie::thisToString();
}

string Hoodie::thisToString()
{
	return "Zip: " + boolToString(isHasZip) + "\n";
}
