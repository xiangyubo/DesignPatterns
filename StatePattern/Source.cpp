#include"InfrantryStates.h"
#include"Infantry.h"
int main()
{
	Infantry xyb;
	xyb.moveTo(Position(rand(), rand()));
	xyb.stop();
	xyb.attack();
	xyb.attack();
	xyb.stop();
	xyb.moveTo(Position(rand(), rand()));
	xyb.stop();
	xyb.attack();
	xyb.moveTo(Position(rand(), rand()));
	xyb.stop();
	return 0;
}