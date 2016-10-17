#ifndef BEHAVIOR_H
#define BEHAVIOR_H
class QuackBehavior {
public:
	virtual void quack() = 0;
};
class QuackForMallar :public QuackBehavior {
public:
	void quack() override;
};



class FlyBehavior {
public:
	virtual void fly() = 0;
};
class FlyForMallar :public FlyBehavior {
public:
	void fly() override;
};
#endif // !BEHAVIOR_H
