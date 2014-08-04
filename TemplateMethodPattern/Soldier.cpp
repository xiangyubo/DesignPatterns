#include"Soldier.h"
#include<iostream>
Soldier::Soldier(const std::string &_name):name(_name)
{
	
}

void Soldier::fight()
{
	getCloseToEnemy();
	attack();
	pause4NextAttack();
}

void Soldier::pause4NextAttack()
{
	std::cout<<name<<": pause, prepare for next attack!"<<std::endl;
}