#pragma once
#include "LowerBodyClothes.h"

class Underpants :protected LowerBodyClothes
{
private:
	string type;
	string thisToString() override;
public:
	Underpants();
	Underpants(string brand, string color, string type, int size);
	string getType();
	void setType(string type);
	string toString() override;
};