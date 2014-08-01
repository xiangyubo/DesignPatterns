#ifndef _PARAM_
#define _PARAM_
enum FilterCondition
{
	Time,
	Country,
	Browser
};

struct TimeInfo
{
	int hour;
	int minite;
	int second;
	TimeInfo(int h, int m, int s):hour(h), minite(m), second(s){}
};

enum BrowserInfo
{
	IE,
	FireFox,
	Chrome
};

enum CountryInfo
{
	China,
	German,
	America
};
#endif