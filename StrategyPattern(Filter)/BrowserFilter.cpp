#include"BrowserFilter.h"
bool IEBowserFilter::predicate(std::map<FilterCondition, void *> &params) const
{
	return IE == *static_cast<BrowserInfo *>(params[Browser]);
}

bool ChromeBowserFilter::predicate(std::map<FilterCondition, void *> &params) const
{
	return Chrome == *static_cast<BrowserInfo *>(params[Browser]);
}

bool FireFoxBowserFilter::predicate(std::map<FilterCondition, void *> &params) const
{
	return FireFox == *static_cast<BrowserInfo *>(params[Browser]);
}