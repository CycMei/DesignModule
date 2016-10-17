#ifndef DUCK_H
#define DUCK_H
class QuackBehavior;
class FlyBehavior;

class QuackForMallar;
class FlyForMallar;

class Duck {
protected:
	Duck(QuackBehavior *q, FlyBehavior *f);
	void perFormQuack();
	void setQuackBehavior(QuackBehavior *q);

	void perFormFly();
	void setFlyBehavior(FlyBehavior *f);
	virtual void display()=0;
private:
	QuackBehavior *quackbehavior;
	FlyBehavior *flybehavior;
};

class MallardDuck :public Duck {
public:
	MallardDuck() :Duck(new QuackForMallar(), new FlyForMallar()) {

	}
	void display() override;
};

#endif // !DUCK_H
