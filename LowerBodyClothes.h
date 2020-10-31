#pragma once
#include "Clothes.h"

class LowerBodyClothes :virtual public Clothes
{
protected:
	bool isHasPockets;
public:
	LowerBodyClothes();
	LowerBodyClothes(string brand, string color, int size, bool isHasPockets);
	bool getIsHasPockets();
	void setIsHasPockets(bool isHasPockets);
	virtual string toString() override;
	virtual string thisToString() override;
};