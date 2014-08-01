#include"FilterExecutor.h"
FilterExecutor::FilterExecutor(std::map<FilterCondition, Filter *> &filter_conditions):
	filter_coll(filter_conditions)
{

}

bool FilterExecutor::filter(std::map<FilterCondition, void *> &params)
{
	std::map<FilterCondition, void *>::iterator itp;
	for(itp = params.begin(); itp != params.end(); ++itp)
	{											//简单的只对对于有过滤器的条件进行判断
		if(filter_coll.find(itp->first) != filter_coll.end() && 
			filter_coll.at(itp->first)->predicate(params) != true)
		{
			return false;
		}
	}
	return true;
}