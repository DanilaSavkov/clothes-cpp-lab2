#pragma once
#include "UpperBodyClothing.h"

class TShirt :protected UpperBodyClothing
{
private:
	string thisToString() override;
	bool isHasButtons;
public:
	TShirt();
	TShirt(string brand, string color, int size, bool isHasButtons);
	bool getIsHasButtons();
	void setIsHasButtons(bool isHasButtons);
	string toString() override;
};

