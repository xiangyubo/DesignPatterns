#include"Department.h"
#include<vector>
class Company:public BaseDepartment
{
private:
	std::vector<BaseDepartment *> departments;
public:
	Company(const std::string  &name):BaseDepartment(name)
	{
		return ;
	}
	virtual void addDepartment(BaseDepartment *d);
	virtual void removeDepartment(BaseDepartment *d);
	virtual void getDescription(std::string &prefix);
};

class Department:public BaseDepartment
{
public:
	Department(const std::string  &name):BaseDepartment(name)
	{
		return ;
	}
	virtual void getDescription(std::string &prefix);
	virtual void addDepartment(BaseDepartment *d);
	virtual void removeDepartment(BaseDepartment *d);
};