#include"xyb.h"
#include"zpl.h"
int main()
{
	zpl _zpl;
	xyb xyb0(_zpl), xyb1(_zpl), xyb2(_zpl);
	xyb *xyb3 = new xyb(_zpl);
	_zpl.message_changed(string("ÏòÓî²¨£¬ÎÒ°®Äã~"));
	xyb3->deregister();
	_zpl.message_changed(string("ÏòÓî²¨£¬ÎÒÌÖÑáÄã£¡"));
	return 0;
}