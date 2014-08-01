#ifndef _BEVERAGE
#define _BEVERAGE
#include<string>
using std::string;
class Beverage
{
protected:
	string description;
	double cost;
	//static double cost;
public:
	virtual double get_cost() const = 0;
	virtual string get_description() const = 0;
	//static void set_cost(double _cost = 3.0)
	void set_cost(double _cost = 3.0)
	{
		cost = _cost;
	}
};
#endif