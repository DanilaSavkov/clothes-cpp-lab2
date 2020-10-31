#pragma once
#include "UpperBodyClothing.h"

class Hoodie :protected UpperBodyClothing
{
private:
	string thisToString() override;
	bool isHasZip;
public:
	Hoodie();
	Hoodie(string brand, string color, int size, bool isHasZip);
	bool getIsHasZip();
	void setIsHasZip();
	string toString() override;
};

