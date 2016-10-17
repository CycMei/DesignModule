#ifndef BEHAVIOR_H
#define BEHAVIOR_H
class QuackBehavior {
public:
	QuackBehavior();
	virtual ~QuackBehavior();
	virtual void quack() const = 0;
};
class QuackForMallar :public QuackBehavior {
public:
	QuackForMallar();
	~QuackForMallar();
	void quack() const override;
};



class FlyBehavior {
public:
	FlyBehavior();
	virtual ~FlyBehavior();
	virtual void fly() const = 0;
};
class FlyForMallar :public FlyBehavior {
public:
	FlyForMallar();
	~FlyForMallar();
	void fly() const override;
};
#endif // !BEHAVIOR_H
