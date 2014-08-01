#include"xyb.h"
#include"zpl.h"
xyb::xyb(zpl &_sub):sub(_sub)
{
	sub.register_observer(*this);
}

void xyb::update(const string &msg)
{
	cout<<"接到新消息："<<msg<<endl;
}

void xyb::deregister()
{
	sub.remove_observer(*this);
}