#include"Infantry.h"
#include"InfrantryStates.h"
#include<iostream>
using std::cout;
using std::endl;
stopState *stopState::getInstence()
{
	static stopState enty;
	return &enty;
}

void stopState::stop(Infantry *enty)
{
	cout<<"stop and start to scout"<<endl;
	if(enty->scout() == true)
	{
		cout<<"find enemy! destry it!!"<<endl;
		enty->setState(attackState::getInstence());
		enty->attack();
	}
}

void stopState::moveTo(Infantry *enty)
{
	cout<<"receive move cmd, move now!"<<endl;
	enty->setState(moveState::getInstence());
	enty->moveTo(enty->getDes());
}

void stopState::attack(Infantry *enty)
{
	cout<<"receive attack cmd, attack now!"<<endl;
	enty->setState(attackState::getInstence());
	enty->attack();
}

moveState *moveState::getInstence()
{
	static moveState enty;
	return &enty;
}

void moveState::moveTo(Infantry *enty)
{
	if(enty->getDes() == enty->getPos())
	{
		cout<<"arrival!"<<endl;
		enty->setState(stopState::getInstence());
		enty->stop();
	}
	else
	{
		cout<<"move!"<<endl;
		enty->updatePos();
	}
}

void moveState::stop(Infantry *enty)
{
	cout<<"receive stop cmd, stop now!"<<endl;
	enty->setState(stopState::getInstence());
	enty->stop();
}

void moveState::attack(Infantry *enty)
{
	cout<<"receive attack cmd, move to target then attack!"<<endl;
	enty->setState(attackState::getInstence());
	enty->attack();
}

attackState *attackState::getInstence()
{
	static attackState enty;
	return &enty;
}

void attackState::attack(Infantry *enty)
{
	cout<<"attack!"<<endl;
}

void attackState::moveTo(Infantry *enty)
{
	cout<<"receive move cmd, move now!"<<endl;
	enty->setState(moveState::getInstence());
	enty->moveTo(enty->getDes());
}

void attackState::stop(Infantry *enty)
{
	cout<<"receive stop cmd, stop now!"<<endl;
	enty->setState(stopState::getInstence());
	enty->stop();
}