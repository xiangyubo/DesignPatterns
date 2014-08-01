#include"Soldier.h"
class Infantry:public Level1Soldier
{
public:
	Infantry();
};

class Knight:public Level2Soldier
{
public:
	Knight();
};

class MonsterAxer:public Level1Soldier
{
public:
	MonsterAxer();
};

class Darter:public Level2Soldier
{
public:
	Darter();
};