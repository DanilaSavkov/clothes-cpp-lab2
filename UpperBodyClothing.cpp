#include "UpperBodyClothing.h"

UpperBodyClothing::UpperBodyClothing() : Clothes()
{
	this->isHasSleeves = false;
	this->isHasHood = false;	
	//cout << "UpperBodyClothes default constructor" << endl;
}

UpperBodyClothing::UpperBodyClothing(string brand, string color, int size, bool isHasSleeves, bool isHasHood) : Clothes::Clothes(brand, color, size)
{
	this->isHasSleeves = isHasSleeves;
	this->isHasHood = isHasHood;
	//cout << "UpperBodyClothes constructor" << endl;
}

bool UpperBodyClothing::getIsHasSleeves()
{
	return isHasSleeves;
}

bool UpperBodyClothing::getIsHasHood()
{
	return isHasHood;
}

void UpperBodyClothing::setIsHasSleeves(bool isHasSleeves)
{
	this->isHasSleeves = isHasSleeves;
}

void UpperBodyClothing::setIsHasHood(bool isHasHood)
{
	this->isHasHood = isHasHood;
}

string UpperBodyClothing::toString()
{
	return Clothes::thisToString() + UpperBodyClothing::thisToString();
}

string UpperBodyClothing::thisToString()
{
	return "Sleeves: " + boolToString(isHasSleeves) + "\n" + "Hood: " + boolToString(isHasHood) + "\n";
}