#include"SoldierFactory.h"
#include"Soldier.h"
int main()
{
	SoldierFactory *hunm_factory = new HumanSoldierFactory;
	SoldierFactory *monster_factory = new MonsterSoldierFactory;

	Soldier s0 = hunm_factory->train_a_soldier(SoldierType::INFANTRY);
	Soldier s1 = hunm_factory->train_a_soldier(SoldierType::KNIGHT);
	Soldier s2 = monster_factory->train_a_soldier(SoldierType::MONSTER_AXER);
	Soldier s3 = monster_factory->train_a_soldier(SoldierType::DARTER);

	s0.get_describe();
	s1.get_describe();
	s2.get_describe();
	s3.get_describe();

	return 0;
}