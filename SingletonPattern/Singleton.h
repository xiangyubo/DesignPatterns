class Singleton	//最简单经典的单线程单例模式
{
private:
	static Singleton * instence;
	Singleton(){}
	Singleton(const Singleton&){}
	Singleton& operator = (const Singleton&){return *this;}
public:
	static Singleton* getInstence()
	{
		if(instence == nullptr)
		{
			instence = new Singleton;
		}
		return instence;
	}
};

class Singleton0	//两段锁方式的单例模式
{
private:
	static Singleton0 * volatile instence;	//关键字volatile也还需要学习一下
	Singleton0(){}
	Singleton0(const Singleton0&){}
	Singleton0& operator = (const Singleton0&){return *this;}
public:
	static Singleton0 * getInstence()
	{
		if(instence == nullptr)		//如果不存在实例，进入临界区
		{
			//各种锁。。。暂时不会，今天把它调研好写上去！		//意味着只有第一次创建时候才有可能进加锁
			if(instence == nullptr)						//其余时候都直接在最外面的条件就返回了，提高效率	
			{										//再次判断是否真的没有，因为有可能有多线程都在临界区外等着
				instence = new Singleton0;
			}
		}
		return instence;
	}
};

class Singleton1	//超经典懒汉式单例模式
{
private:
	Singleton1(){}
	Singleton1(const Singleton1&){}
	Singleton1& operator = (const Singleton1&){return *this;}
public:
	static Singleton1& getInstence()
	{
		static Singleton1 instence;		//局部静态变量，只有第一次使用的时候才会初始化，保证初始化顺序
		return instence;				//利用静态变量的特性，只初始化一次
	}
};