struct Position
{
	double x;
	double y;
	Position(double _x = 0.0, double _y = 0.0):
		x(_x), y(_y)
	{}
	bool operator == (const Position &pos) const
	{
		return x == pos.x && y == pos.y;
	}
};
#ifndef _INFANTRY_
#define _INFANTRY_

class State;

class Infantry
{
private:
	State *curState;

	Position pos;
	Position des;
	
	double sightLen;
	double speed;

public:
	Infantry(Position &_pos = *new Position, double _sl = 10, double _sp = 3);

	void moveTo(Position &_des);

	void stop();

	void attack();

	bool scout();

	void updatePos();

	void setState(State *s);

	Position getPos()
	{
		return pos;
	}

	Position getDes()
	{
		return des;
	}
};

#endif