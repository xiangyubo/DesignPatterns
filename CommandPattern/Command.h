#ifndef _COMMAND
#define _COMMAND

class Command
{
public:
	virtual void excute(void *info = nullptr) = 0;
	virtual void undo() = 0;
	virtual ~Command(){};
};

#endif