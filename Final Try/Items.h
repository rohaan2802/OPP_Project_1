#pragma once
#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class Items
{
public:
	string name;
	string category;
	string SKU;
	float s_price;
	float p_price;
	int quantity;

	Items();
	void Display(Items&);
};

