#include"Solider.h"
#include"SoldierCommand.h"
int main()
{
	Soldier *inf = new Infantry;
	Soldier *kni = new Knight;
	Soldier *can = new Cannon;

	SoldierMoveCommand *moinf = new SoldierMoveCommand(*inf);
	SoldierMoveCommand *mokni = new SoldierMoveCommand(*kni);
	SoldierMoveCommand *mocan = new SoldierMoveCommand(*can);

	moinf->excute(&Position(5.0f,3.0f));
	moinf->undo();
	mokni->excute(&Position(5.0f,3.0f));
	mokni->undo();
	mocan->excute(&Position(5.0f,3.0f));
	mocan->undo();


	SoldierAttackCommand *atinf = new SoldierAttackCommand(*inf);
	atinf->excute();
	atinf->undo();
	return 0;
}