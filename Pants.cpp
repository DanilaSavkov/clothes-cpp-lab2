#include "Pants.h"

Pants::Pants() : LowerBodyClothes()
{
	this->isHasZip = true;
}

Pants::Pants(string brand, string color, int size, bool isHasZip) : Clothes(brand, color, size), LowerBodyClothes(brand, color, size, true)
{
	this->isHasZip = isHasZip;
}

bool Pants::getIsHasZip()
{
	return isHasZip;
}

void Pants::setIsHasZip()
{
	this->isHasZip = isHasZip;
}

string Pants::toString()
{
	return LowerBodyClothes::toString() + thisToString();
}

string Pants::thisToString()
{
	return "Zip: " + boolToString(isHasZip) + "\n";
}
