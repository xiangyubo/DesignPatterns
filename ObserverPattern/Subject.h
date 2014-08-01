class Observer;
class Subject
{
public:
	virtual void register_observer(Observer &obs) = 0;
	virtual void remove_observer(Observer &obs) = 0;
	virtual void notify_observer() = 0;
};