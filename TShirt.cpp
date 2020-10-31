#include "TShirt.h"

TShirt::TShirt() : UpperBodyClothing()
{
	this->isHasButtons = false;
}

TShirt::TShirt(string brand, string color, int size, bool isHasButtons) : Clothes(brand, color, size), UpperBodyClothing(brand, color, size, false, false)
{
	this->isHasButtons = isHasButtons;
}

bool TShirt::getIsHasButtons()
{
	return isHasButtons;
}

void TShirt::setIsHasButtons(bool isHasButtons)
{
	this->isHasButtons = isHasButtons;
}

string TShirt::toString()
{
	return UpperBodyClothing::toString() + thisToString();
}

string TShirt::thisToString()
{
	return "Buttons: " + boolToString(isHasButtons) + "\n";
}
