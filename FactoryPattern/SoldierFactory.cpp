#include"SoldierFactory.h"
#include"Infantry.h"
Soldier HumanSoldierFactory::train_a_soldier(SoldierType type)
{
	switch (type)
	{
	case SoldierType::INFANTRY:
		return *(new Infantry);
		break;
	case SoldierType::KNIGHT:
		return *(new Knight);
		break;
	}
}

Soldier MonsterSoldierFactory::train_a_soldier(SoldierType type)
{
	switch (type)
	{
	case SoldierType::MONSTER_AXER:
		return *(new MonsterAxer);
		break;
	case SoldierType::DARTER:
		return *(new Darter);
		break;
	}
}