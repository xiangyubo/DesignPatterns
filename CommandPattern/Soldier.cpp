#include"Solider.h"
#include<iostream>
#include"Geometry.h"
Position Soldier::getPosition()
{
	return _pos;
}

void Infantry::walk(Position &pos)
{
	std::cout<<"�����ߵ� x: "<<pos.x<<" y: "<<pos.y<<"λ��"<<std::endl;
}

void Infantry::attack()
{
	std::cout<<"����������"<<std::endl;
}

void Knight::walk(Position &pos)
{
	std::cout<<"��ʿ�ߵ� x: "<<pos.x<<" y: "<<pos.y<<"λ��"<<std::endl;
}

void Knight::attack()
{
	std::cout<<"��ʿ������"<<std::endl;
}

void Cannon::walk(Position &pos)
{
	std::cout<<"�����Ȼ����ߵ� x: "<<pos.x<<" y: "<<pos.y<<"λ��"<<std::endl;
}

void Cannon::attack()
{
	std::cout<<"�����Ȼ��ڹ�����"<<std::endl;
}