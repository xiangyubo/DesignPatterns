#include"ConcreteSoldiers.h"
#include<iostream>
Infantry::Infantry():Soldier("Infantry")
{
	
}

void Infantry::getCloseToEnemy()
{
	std::cout<<name<<": walk to enemy, fight at he aside!"<<std::endl;
}

void Infantry::attack()
{
	std::cout<<name<<": wave my sword, strick!"<<std::endl;
}

Musketeer::Musketeer():Soldier("Musketeer")
{
	
}

void Musketeer::getCloseToEnemy()
{
	std::cout<<name<<": just near the enemy, keep distence!"<<std::endl;
}

void Musketeer::attack()
{
	std::cout<<name<<": fire a shoot!"<<std::endl;
}

Knight::Knight():Soldier("Knight")
{
	
}

void Knight::getCloseToEnemy()
{
	std::cout<<name<<": ride to the enemy, dash!"<<std::endl;
}

void Knight::attack()
{
	std::cout<<name<<": smite!!!"<<std::endl;
}