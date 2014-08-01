#include"Filter.h"
class IEBowserFilter:public Filter
{
public:
	virtual bool predicate(std::map<FilterCondition, void *> &params) const;
};

class ChromeBowserFilter:public Filter
{
public:
	virtual bool predicate(std::map<FilterCondition, void *> &params) const;
};

class FireFoxBowserFilter:public Filter
{
public:
	virtual bool predicate(std::map<FilterCondition, void *> &params) const;
};