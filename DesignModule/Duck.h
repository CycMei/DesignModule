#ifndef DUCK_H
#define DUCK_H
class QuackBehavior;
class FlyBehavior;

class QuackForMallar;
class FlyForMallar;

class Duck {
public:
	virtual ~Duck();
	virtual void display() const = 0;
	Duck(QuackBehavior *q, FlyBehavior *f);
	void perFormQuack() const;
	void setQuackBehavior(QuackBehavior *q);

	void perFormFly() const;
	void setFlyBehavior(FlyBehavior *f);
private:
	QuackBehavior *quackbehavior;
	FlyBehavior *flybehavior;
};

class MallardDuck :public Duck {
public:
	MallardDuck();
	~MallardDuck();
	void display() const override;
};

#endif // !DUCK_H
