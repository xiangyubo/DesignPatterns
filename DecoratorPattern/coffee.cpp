#include"coffee.h"
#include<iostream>
using std::cout;
using std::endl;
double HouseBlend::get_cost() const
{
	return cost;
}

string HouseBlend::get_description() const
{
	return description;
}