#include"Filter.h"
class Browser;
class CountryFilter;
class TimeFilter;

class FilterExecutor
{
private:
	std::map<FilterCondition, Filter *> filter_coll;
public:
	FilterExecutor(std::map<FilterCondition, Filter *> &filter_conditions);
	bool filter(std::map<FilterCondition, void *> &params);
};