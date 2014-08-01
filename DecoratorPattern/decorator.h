#include"Beverage.h"
#include<cassert>
class Decorator:public Beverage
{
protected:
	Beverage *decorated;
public:
	Decorator():decorated(nullptr){}
	Decorator(Beverage &d):decorated(&d){}
	virtual double get_cost() const;
	virtual string get_description() const;
	void set_decorated(Beverage &d)
	{
		assert(decorated == nullptr);	//������ͬһ��������ͬһ�֣������ظ��ӵ���ͬ�ı�װ������
		decorated = &d;
	}
private:
	Decorator(const Decorator &);
	Decorator & operator = (const Decorator &);
};

class Mocha:public Decorator
{
private:
	void _init()
	{
		cost = 1.5f;
		description = string("a pice of Mocha~~");
	}
public:
	Mocha()
	{
		_init();
	}
	Mocha(Beverage &d):Decorator(d)
	{
		_init();
	}
};

class Milk:public Decorator
{
private:
	void _init()
	{
		cost = 1.0f;
		description = string("a pice of Milk~~");
	}
public:
	Milk()
	{
		_init();
	}
	Milk(Beverage &d):Decorator(d)
	{
		_init();
	}
};