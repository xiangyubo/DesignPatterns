#include"Soldier.h"
class Infantry:public Soldier
{
public:
	Infantry();
	virtual void getCloseToEnemy();
	virtual void attack();
};

class Musketeer:public Soldier
{
public:
	Musketeer();
	virtual void getCloseToEnemy();
	virtual void attack();
};

class Knight:public Soldier
{
public:
	Knight();
	virtual void getCloseToEnemy();
	virtual void attack();
};