#include"SoldierFactory.h"
#include"Infantry.h"
Level1Soldier HumanSoldierFactory::train_level1_soldier()
{
	return *(new Infantry);
}

Level2Soldier HumanSoldierFactory::train_level2_soldier()
{
	return *(new Knight);
}

Level1Soldier MonsterSoldierFactory::train_level1_soldier()
{
	return *(new MonsterAxer);
}

Level2Soldier MonsterSoldierFactory::train_level2_soldier()
{
	return *(new Darter);
}