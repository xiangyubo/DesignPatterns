#include"BrowserFilter.h"
#include"CountryFilter.h"
#include"TimeFilter.h"
#include"FilterExecutor.h"
#include<iostream>
using std::map;
int main()
{
	map<FilterCondition, Filter *> filter_coll;
	filter_coll.insert(std::make_pair(Time, &MorningFilter()));
	filter_coll.insert(std::make_pair(Browser, &IEBowserFilter()));
	filter_coll.insert(std::make_pair(Country, &ChinaFilter()));
	FilterExecutor filter(filter_coll);

	map<FilterCondition, void *> inputs;
	inputs.insert(std::make_pair(Time, &TimeInfo(0,52,1/*�������ڵ�ʱ���*/)));
	BrowserInfo bow = Chrome;
	inputs.insert(std::make_pair(Browser, &bow));
	CountryInfo con = China;
	inputs.insert(std::make_pair(Country, &con));	//�������ʱ��㣬���й���chrome��
													//���ǿ�Ƴ���Գ��ʲô������

	if(filter.filter(inputs) == true)
	{
		std::cout<<"���й�������IE������С��ƽ���"<<std::endl;
	}
	else
	{
		std::cout<<"���ҹ�����й���chrome��һ��������ũ"<<std::endl;
	}
	return 0;
}