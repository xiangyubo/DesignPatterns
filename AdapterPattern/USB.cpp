#include"USB.h"
#include<iostream>
std::string USB::read_USB()
{
	auto data = std::string("copy right by xyb");
	std::cout<<"read USB data: "<<data<<std::endl;
	return data;
}
	
void USB::write_USB(std::string &data)
{
	std::cout<<"write USB data: "<<data<<std::endl;
}