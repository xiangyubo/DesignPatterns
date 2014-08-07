#ifndef _STATE_
#define _STATE_

#include<iostream>
class Infantry;

class State
{
public:
	virtual void moveTo(Infantry *) = 0
	{
		std::cout<<"can't move!"<<std::endl;
	}
	virtual void stop(Infantry *) = 0
	{
		std::cout<<"can't stop!"<<std::endl;
	}
	virtual void attack(Infantry *) = 0
	{
		std::cout<<"can't attack!"<<std::endl;
	}
};

#endif