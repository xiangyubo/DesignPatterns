#include"WeaponBehavior.h"
#include"Character.h"
int main()
{
	Character *king = new King;
	Character *queue = new Queue;
	Character *knight = new Knight;
	Character *troll = new Troll;

	king->fight();
	queue->fight();
	knight->fight();
	troll->fight();

	king->setWeapon(new AxsBehavior);
	king->fight();
	king->setWeapon(new KnifeBehavior);
	king->fight();

	return 0;
}