#include"Filter.h"

class MorningFilter:public Filter
{
public:
	virtual bool predicate(std::map<FilterCondition, void *> &params) const;
};

class AfternoonFilter:public Filter
{
public:
	virtual bool predicate(std::map<FilterCondition, void *> &params) const;
};

class NightFilter:public Filter
{
public:
	virtual bool predicate(std::map<FilterCondition, void *> &params) const;
};