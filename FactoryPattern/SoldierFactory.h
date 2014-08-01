class Soldier;
enum SoldierType
{
	INFANTRY,
	KNIGHT,
	MONSTER_AXER,
	DARTER
};
class SoldierFactory
{
public:
	virtual Soldier train_a_soldier(SoldierType type) = 0;
};

class HumanSoldierFactory:public SoldierFactory
{
public:
	virtual Soldier train_a_soldier(SoldierType type);
};

class MonsterSoldierFactory:public SoldierFactory
{
public:
	virtual Soldier train_a_soldier(SoldierType type);
};