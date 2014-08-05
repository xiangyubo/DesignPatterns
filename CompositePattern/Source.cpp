#include"ConcreteCompany.h"
int main()
{
	Company NetEase("NetEasy");
	Department part1("在线游戏事业部");
	Department part2("盘古游戏部");
	Department part3("雷火游戏部");
	Department part4("大话&梦幻游戏部");
	Company littleCompany("美术子公司");
	Department part5("人物原画部");
	Department part6("背景原画部");
	Department part7("武器原画部");

	NetEase.addDepartment(&part1);
	NetEase.addDepartment(&part2);
	NetEase.addDepartment(&part3);
	NetEase.addDepartment(&part4);
	NetEase.addDepartment(&littleCompany);
	littleCompany.addDepartment(&part5);
	littleCompany.addDepartment(&part6);
	littleCompany.addDepartment(&part7);

	NetEase.getDescription(std::string(""));
	return 0;
}