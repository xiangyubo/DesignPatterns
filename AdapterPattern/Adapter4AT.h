#include<string>
class USB;

class Adapter4AT
{
public:
	void plugUSB(USB &intf);
	std::string read();
	void write(std::string &);
private:
	USB	*_intf;
};