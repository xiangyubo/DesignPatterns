#include"Command.h"
#include"Geometry.h"
class Soldier;
class SoldierMoveCommand:public Command
{
private:
	Position prePos;
	Soldier *receiver;
public:
	SoldierMoveCommand(Soldier &recv);
	virtual void excute(void *info = nullptr);
	virtual void undo();
};

class SoldierAttackCommand:public Command
{
private:
	Soldier *receiver;
public:
	SoldierAttackCommand(Soldier &recv);
	virtual void excute(void *info = nullptr);
	virtual void undo();
};