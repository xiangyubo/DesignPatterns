#include"Infantry.h"
#include"InfrantryStates.h"
Infantry::Infantry(Position &_pos, double _sl, double _sp):
	pos(_pos), sightLen(_sl), speed(_sp)
{
	curState = new stopState;
}

void Infantry::moveTo(Position &_des)
{
	des = _des;
	curState->moveTo(this);
}

void Infantry::stop()
{
	curState->stop(this);
}

void Infantry::attack()
{
	curState->attack(this);
}

bool Infantry::scout()
{
	if(rand() %10 <4)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Infantry::updatePos()
{
	Position vec(des.x - pos.x, des.y - pos.y);
	//...
	pos = des;
}

void Infantry::setState(State *s)
{
	curState = s;
}