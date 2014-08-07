#include"State.h"

class moveState:public State
{
public:
	static moveState *getInstence();
	virtual void moveTo(Infantry *);
	virtual void stop(Infantry *);
	virtual void attack(Infantry *);
};

class stopState:public State
{
public:
	static stopState *getInstence();
	virtual void moveTo(Infantry *);
	virtual void stop(Infantry *);
	virtual void attack(Infantry *);
};

class attackState:public State
{
public:
	static attackState *getInstence();
	virtual void moveTo(Infantry *);
	virtual void stop(Infantry *);
	virtual void attack(Infantry *);
};