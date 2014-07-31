class Singleton	//��򵥾���ĵ��̵߳���ģʽ
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

class Singleton0	//��������ʽ�ĵ���ģʽ
{
private:
	static Singleton0 * volatile instence;	//�ؼ���volatileҲ����Ҫѧϰһ��
	Singleton0(){}
	Singleton0(const Singleton0&){}
	Singleton0& operator = (const Singleton0&){return *this;}
public:
	static Singleton0 * getInstence()
	{
		if(instence == nullptr)		//���������ʵ���������ٽ���
		{
			//��������������ʱ���ᣬ����������к�д��ȥ��		//��ζ��ֻ�е�һ�δ���ʱ����п��ܽ�����
			if(instence == nullptr)						//����ʱ��ֱ����������������ͷ����ˣ����Ч��	
			{										//�ٴ��ж��Ƿ����û�У���Ϊ�п����ж��̶߳����ٽ��������
				instence = new Singleton0;
			}
		}
		return instence;
	}
};

class Singleton1	//����������ʽ����ģʽ
{
private:
	Singleton1(){}
	Singleton1(const Singleton1&){}
	Singleton1& operator = (const Singleton1&){return *this;}
public:
	static Singleton1& getInstence()
	{
		static Singleton1 instence;		//�ֲ���̬������ֻ�е�һ��ʹ�õ�ʱ��Ż��ʼ������֤��ʼ��˳��
		return instence;				//���þ�̬���������ԣ�ֻ��ʼ��һ��
	}
};