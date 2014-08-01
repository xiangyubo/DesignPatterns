#include"SoldierCommand.h"
#include"Solider.h"
#include"Geometry.h"
#include<iostream>
SoldierMoveCommand::SoldierMoveCommand(Soldier & recv):receiver(&recv)
{}

void SoldierMoveCommand::excute(void *info)
{
	prePos = receiver->getPosition();
	receiver->walk(*static_cast<Position*>(info));
}

void SoldierMoveCommand::undo()
{
	receiver->walk(prePos);
}

SoldierAttackCommand::SoldierAttackCommand(Soldier & recv):receiver(&recv)
{}

void SoldierAttackCommand::excute(void *info)
{
	receiver->attack();
}

void SoldierAttackCommand::undo()
{
	std::cout<<"打人了你还想撤销？？"<<std::endl;
}