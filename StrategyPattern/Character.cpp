#include"WeaponBehavior.h"
#include"Character.h"
void Character::fight()
{
	wb->useWeapon();
}

void Character::setWeapon(WeaponBehavior *newWeapon)
{
	delete wb;
	wb = newWeapon;
}