#ifndef _DEPARTMENT_
#define _DEPARTMENT_

#include<string>
class BaseDepartment
{
protected:
	std::string name;
	BaseDepartment *parentCompany;
public:
	BaseDepartment(const std::string &_name):name(_name),
		parentCompany(nullptr)
	{
		
	}
	virtual void addDepartment(BaseDepartment *d) = 0;
	virtual void removeDepartment(BaseDepartment *d) = 0;
	virtual void getDescription(std::string &prefix) = 0;
	std::string getName()
	{
		return name;
	}
};

#endif