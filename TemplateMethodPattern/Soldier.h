#ifndef _SOLDIER_
#define _SOLDIER_

#include<string>
class Soldier	//�ǲ��ǿ��Ժ�״̬ģʽ��ϣ�
{				//�˴���Ϊһ�����࣬��Ϸ�е���һ��fightState
public:			//��Ȼ��������Mixin�����ǻ��ǿ��Լ̳а�...�ٵ���
	std::string name;
public:
	Soldier(const std::string &_name);
	void fight();
	virtual void getCloseToEnemy() = 0;
	virtual void attack()  = 0;
	void pause4NextAttack();
};

#endif