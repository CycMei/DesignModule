#ifndef DISPLAYELEMENT_H
#define DISPLAYELEMENT_H
class DisplayElement {
public:
	virtual ~DisplayElement();
	virtual void display() = 0;
protected:
	DisplayElement();
};

class InstanceDisplayElement :public DisplayElement {
public:
	InstanceDisplayElement();
	~InstanceDisplayElement();
	void display() override;
};

#endif // !DISPLAYELEMENT_H
