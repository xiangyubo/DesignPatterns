#include"Adapter4AT.h"
#include"USB.h"
int main()
{
	Adapter4AT adapter;
	USB usb;
	adapter.plugUSB(usb);
	adapter.read();
	adapter.write(std::string("copy right by xyb"));
	return 0;
}