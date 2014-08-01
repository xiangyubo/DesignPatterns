#include"Subject.h"
#include<string>
#include<vector>
using std::string;
using std::vector;
class zpl:public Subject
{
public:
	void message_changed(string &_msg)
	{
		msg = _msg;
		notify_observer();
	}
	virtual void register_observer(Observer &obs);
	virtual void remove_observer(Observer &obs);
	virtual void notify_observer();
private:
	string msg;
	vector<Observer *> notify_array;
};