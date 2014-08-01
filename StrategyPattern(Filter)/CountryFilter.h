#include"Filter.h"

class ChinaFilter:public Filter
{
public:
	virtual bool predicate(std::map<FilterCondition, void *> &params) const;
};

class GermanFilter:public Filter
{
public:
	virtual bool predicate(std::map<FilterCondition, void *> &params) const;
};

class AmericaFilter:public Filter
{
public:
	virtual bool predicate(std::map<FilterCondition, void *> &params) const;
};