#include"Beverage.h"
class HouseBlend:public Beverage
{
public:
	HouseBlend()
	{
		cost = 5.0f;
		description = string("a cup of nice HouseBlend");
	}
	virtual double get_cost() const;
	virtual string get_description() const;
private:
	HouseBlend(const HouseBlend &);
	HouseBlend & operator = (const HouseBlend &);
};