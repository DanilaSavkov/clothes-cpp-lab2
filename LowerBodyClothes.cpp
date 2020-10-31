#include "LowerBodyClothes.h"

LowerBodyClothes::LowerBodyClothes() : Clothes()
{
	this->isHasPockets = false;
	//cout << "LowerBodyClothes default constructor" << endl;
}

LowerBodyClothes::LowerBodyClothes(string brand, string color, int size, bool isHasPockets) : Clothes(brand, color, size)
{
	this->isHasPockets = isHasPockets;
	//cout << "LowerBodyClothes constructor" << endl;
}

bool LowerBodyClothes::getIsHasPockets()
{
	return isHasPockets;
}

void LowerBodyClothes::setIsHasPockets(bool isHasPockets)
{
	this->isHasPockets = isHasPockets;
}

string LowerBodyClothes::toString()
{
	return Clothes::thisToString() + LowerBodyClothes::thisToString();
}

string LowerBodyClothes::thisToString()
{
	return "Pockets: " + boolToString(isHasPockets) + "\n";
}
