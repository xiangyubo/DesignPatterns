#include"coffee.h"
#include"decorator.h"
#include<iostream>
using namespace std;
int main()
{
	Beverage *hous_blend = new HouseBlend;
	hous_blend = new Milk(*hous_blend);
	hous_blend = new Mocha(*hous_blend);
	hous_blend = new Milk(*hous_blend);
	cout<<hous_blend->get_cost()<<endl;
	cout<<hous_blend->get_description()<<endl;
	return 0;
}