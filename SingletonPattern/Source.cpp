#include"Singleton.h"
Singleton * Singleton::instence;
Singleton0 * volatile Singleton0::instence;
int main()
{
	Singleton *s = Singleton::getInstence();
	Singleton0 *s0 = Singleton0::getInstence();
	Singleton1 &s1 = Singleton1::getInstence();
	return 0;
}