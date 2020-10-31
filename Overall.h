#pragma once
#include "UpperBodyClothing.h"
#include "LowerBodyClothes.h"

class Overall :protected UpperBodyClothing, protected LowerBodyClothes
{
private:
	bool isDaily;
	string thisToString() override;
public:
	Overall();
	Overall(string brand, string color, int size, bool isDaily);
	bool getIsDaily();
	void setIsDaily(bool isDaily);
	string toString() override;
};