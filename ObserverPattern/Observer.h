#include<string>
using std::string;
class Observer
{
public:
	virtual void update(const string &msg) = 0;
	virtual void deregister() = 0;
};