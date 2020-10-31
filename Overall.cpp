#include "Overall.h"

Overall::Overall() : UpperBodyClothing(), LowerBodyClothes()
{
	this->isDaily = false;
	//cout << "Overall default constructor" << endl;
}

Overall::Overall(string brand, string color, int size, bool isDaily) : Clothes(brand, color, size), UpperBodyClothing(brand, color, size, false, false), LowerBodyClothes(brand, color, size, true)
{
	this->isDaily = isDaily;
	//cout << "Overall constructor" << endl;
}

bool Overall::getIsDaily()
{
	return isDaily;
}

void Overall::setIsDaily(bool isDaily)
{
	this->isDaily = isDaily;
}

string Overall::toString()
{
	return Clothes::thisToString() + UpperBodyClothing::thisToString() + LowerBodyClothes::thisToString() + thisToString();
}

string Overall::thisToString()
{
	return "For daily wear: " + boolToString(isDaily) + "\n";
}