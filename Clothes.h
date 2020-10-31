#pragma once
#include <iostream>
#include <string>
using namespace std;

class Clothes
{
protected:
	string brand;
	string color;
	int size;
public:
	Clothes();
	Clothes(string brand, string color, int size);
	string getBrand();
	string getColor();
	int getSize();
	void setBrand(string brand);
	void setColor(string color);
	void setSize(int size);
	virtual string toString() = 0;
	virtual string thisToString();
	static string boolToString(bool isHas);
};