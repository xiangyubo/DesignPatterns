#include"TimeFilter.h"
bool MorningFilter::predicate(std::map<FilterCondition, void *> &params) const
{
	int hour = static_cast<TimeInfo *>(params[Country])->hour;
	return 6 <= hour && hour < 13;
}

bool AfternoonFilter::predicate(std::map<FilterCondition, void *> &params) const
{
	int hour = static_cast<TimeInfo *>(params[Country])->hour;
	return 13 <= hour && hour < 19;
}

bool NightFilter::predicate(std::map<FilterCondition, void *> &params) const
{
	int hour = static_cast<TimeInfo *>(params[Country])->hour;
	return 19 <= hour && hour < 24 || 0 <= hour && hour < 6;
}