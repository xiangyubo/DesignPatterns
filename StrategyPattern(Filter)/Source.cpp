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
	inputs.insert(std::make_pair(Time, &TimeInfo(0,52,1/*这是现在的时间点*/)));
	BrowserInfo bow = Chrome;
	inputs.insert(std::make_pair(Browser, &bow));
	CountryInfo con = China;
	inputs.insert(std::make_pair(Country, &con));	//现在这个时间点，在中国用chrome的
													//不是苦逼程序猿是什么啊？！

	if(filter.filter(inputs) == true)
	{
		std::cout<<"在中国白天用IE。。。小白平民吧"<<std::endl;
	}
	else
	{
		std::cout<<"大半夜的在中国用chrome，一看就是码农"<<std::endl;
	}
	return 0;
}