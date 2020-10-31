#pragma once
#include "Clothes.h"

class UpperBodyClothing :virtual public Clothes
{
protected:
	bool isHasSleeves;
	bool isHasHood;
public:
	UpperBodyClothing();
	UpperBodyClothing(string brand, string color, int size, bool isHasSleeves, bool isHasHood);
	bool getIsHasSleeves();
	bool getIsHasHood();
	void setIsHasSleeves(bool isHasSleeves);
	void setIsHasHood(bool isHasHood);
	virtual string toString() override;
	virtual string thisToString() override;
};