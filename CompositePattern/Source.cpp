#include"ConcreteCompany.h"
int main()
{
	Company NetEase("NetEasy");
	Department part1("������Ϸ��ҵ��");
	Department part2("�̹���Ϸ��");
	Department part3("�׻���Ϸ��");
	Department part4("��&�λ���Ϸ��");
	Company littleCompany("�����ӹ�˾");
	Department part5("����ԭ����");
	Department part6("����ԭ����");
	Department part7("����ԭ����");

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