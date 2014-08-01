#ifndef _FILTER_
#define _FILTER_
#include<map>
#include"Param.h"
class Filter
{
public:
	virtual bool predicate(std::map<FilterCondition, void *> &params) const = 0;
};
#endif