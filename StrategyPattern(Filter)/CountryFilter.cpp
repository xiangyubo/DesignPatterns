#include"CountryFilter.h"
bool ChinaFilter::predicate(std::map<FilterCondition, void *> &params) const
{
	return China == *static_cast<CountryInfo *>(params[Country]);
}

bool GermanFilter::predicate(std::map<FilterCondition, void *> &params) const
{
	return German == *static_cast<CountryInfo *>(params[Country]);
}

bool AmericaFilter::predicate(std::map<FilterCondition, void *> &params) const
{
	return America == *static_cast<CountryInfo *>(params[Country]);
}