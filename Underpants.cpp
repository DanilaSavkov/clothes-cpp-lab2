#include "Underpants.h"

Underpants::Underpants() : LowerBodyClothes()
{
	type = "";
}

Underpants::Underpants(string brand, string color, string type, int size) : Clothes(brand, color, size), LowerBodyClothes(brand, color, size, false)
{
	this->type = type;
}

string Underpants::getType()
{
	return type;
}

void Underpants::setType(string type)
{
	this->type = type;
}

string Underpants::toString()
{
	return LowerBodyClothes::toString() + thisToString();
}

string Underpants::thisToString()
{
	return "Type: " + type + "\n";
}
