#include"ConcreteCompany.h"
#include<iostream>
void Company::addDepartment(BaseDepartment *d)
{
	static_cast<Company *>(d)->parentCompany = const_cast<Company *>(this);
	departments.push_back(d);
}

void Company::removeDepartment(BaseDepartment *d)
{
	
}


void Company::getDescription(std::string &prefix)
{
	std::cout<<prefix<<name<<std::endl;
	for(auto it = departments.begin(); it != departments.end(); ++it)
	{
		(*it)->getDescription(prefix + "--");
	}
}

void Department::getDescription(std::string &prefix)
{
	std::cout<<prefix<<name<<std::endl;
}


void Department::addDepartment(BaseDepartment *d)
{
	
}

void Department::removeDepartment(BaseDepartment *d)
{
	
}