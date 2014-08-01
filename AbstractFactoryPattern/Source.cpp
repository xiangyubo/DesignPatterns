#include"SoldierFactory.h"
#include"Soldier.h"
int main()
{
	SoldierFactory *hunm_factory = new HumanSoldierFactory;
	SoldierFactory *monster_factory = new MonsterSoldierFactory;

	Level1Soldier s0 = hunm_factory->train_level1_soldier();
	Level2Soldier s1 = hunm_factory->train_level2_soldier();
	Level1Soldier s2 = monster_factory->train_level1_soldier();
	Level2Soldier s3 = monster_factory->train_level2_soldier();

	s0.get_describe();
	s1.get_describe();
	s2.get_describe();
	s3.get_describe();

	return 0;
}