class WeaponBehavior;
class KnifeBehavior;
class BowAndArrowBehavior;
class AxsBehavior;
class SwordBehavior;
class Character
{
public:
	Character(){}
	void fight();
	void setWeapon(WeaponBehavior *newWeapon);
	virtual ~Character()
	{
		delete wb;
	}
private:
	Character(Character &t);
	Character& operator = (const Character&);
	Character& operator = (const Character&) const;
protected:
	WeaponBehavior *wb;
};

class King:public Character
{
public:
	King()
	{
		wb = new SwordBehavior;
	}
};

class Queue:public Character
{
public:
	Queue()
	{
		wb = new KnifeBehavior;
	}
};

class Knight:public Character
{
public:
	Knight()
	{
		wb = new AxsBehavior;
	}
};

class Troll:public Character
{
public:
	Troll()
	{
		wb = new BowAndArrowBehavior;
	}
};