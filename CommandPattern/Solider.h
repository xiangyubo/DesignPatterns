#ifndef _SOLDIER
#define _SOLDIER

#include"Geometry.h"
class Soldier
{
public:
	virtual void walk(Position &pos) = 0;
	virtual void attack() = 0;
	Position getPosition();
	virtual ~Soldier(){}
private:
	Position _pos;
};

#endif

class Infantry:public Soldier
{
public:
	virtual void walk(Position &pos);
	virtual void attack();
};

class Knight:public Soldier
{
public:
	virtual void walk(Position &pos);
	virtual void attack();
};

class Cannon:public Soldier
{
public:
	virtual void walk(Position &pos);
	virtual void attack();
};