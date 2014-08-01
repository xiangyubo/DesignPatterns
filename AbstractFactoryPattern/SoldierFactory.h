class Level1Soldier;
class Level2Soldier;
class SoldierFactory
{
public:
	virtual Level1Soldier train_level1_soldier() = 0;
	virtual Level2Soldier train_level2_soldier() = 0;
};

class HumanSoldierFactory:public SoldierFactory
{
public:
	virtual Level1Soldier train_level1_soldier();
	virtual Level2Soldier train_level2_soldier();
};

class MonsterSoldierFactory:public SoldierFactory
{
public:
	virtual Level1Soldier train_level1_soldier();
	virtual Level2Soldier train_level2_soldier();
};