#include"Adapter4AT.h"
#include"USB.h"
#include<iostream>
void Adapter4AT::plugUSB(USB &intf)
{
	_intf = &intf;
}

std::string Adapter4AT::read()
{
	std::cout<<"AT interface is reading data"<<std::endl;
	return _intf->read_USB();
}
	
void Adapter4AT::write(std::string &data)
{
	std::cout<<"AT interface is writing data"<<std::endl;
	_intf->write_USB(data);
}