#ifndef OBSERVER_H
#define OBSERVER_H
class DisplayElement;
class Subject;
class Observer {
public:
	virtual ~Observer();
	virtual void update(float,float,float) = 0;
protected:
	Observer();
};

class CurrentConditionDisplay :public Observer{
public:
	CurrentConditionDisplay(Subject*);
	~CurrentConditionDisplay();
	void update(float, float, float) override;
private:
	float temperature;
	float humidity;
	float pressure;
	Subject *_sub;
	//DisplayElement *_dis;
};

#endif // !OBSERVER_H
