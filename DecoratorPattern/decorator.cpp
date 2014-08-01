#include"decorator.h"
#include<iostream>
using std::cout;

double Decorator::get_cost() const
{
	return cost + decorated->get_cost();
}

string Decorator::get_description() const
{
	return description + " + " + decorated->get_description();
}