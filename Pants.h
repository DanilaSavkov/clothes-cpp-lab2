#pragma once
#include "LowerBodyClothes.h"

class Pants :protected LowerBodyClothes
{
private:
	bool isHasZip;
	string thisToString() override;
public:
	Pants();
	Pants(string brand, string color, int size, bool isHasZip);
	bool getIsHasZip();
	void setIsHasZip();
	string toString() override;
};

