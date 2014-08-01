template<typename T>
struct Message
{
	T *msg;
	Message(T *_msg):msg(_msg){}
	~Message()
	{
		delete msg;
	}
};