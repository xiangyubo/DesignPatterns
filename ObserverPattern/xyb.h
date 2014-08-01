#include"Observer.h"
#include<iostream>
using std::cout;
using std::endl;
class zpl;
class xyb:public Observer
{
public:
	xyb(zpl &_sub);
	virtual void update(const string &msg);
	virtual void deregister();
private:
	zpl &sub;
};