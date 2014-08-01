#include"zpl.h"
#include"Observer.h"
void zpl::register_observer(Observer &obs)
{
	notify_array.push_back(&obs);
}

void zpl::remove_observer(Observer &obs)
{
	for(auto it = notify_array.begin(); it != notify_array.end(); ++it)
	{
		if(*it == &obs)
		{
			notify_array.erase(it);
			break;
		}
	}
}

void zpl::notify_observer()
{
	for(auto it = notify_array.begin(); it != notify_array.end(); ++it)
	{
		(*it)->update(msg);
	}
}