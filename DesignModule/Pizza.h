#ifndef PIZZA_H
#define PIZZA_H
#include<string>
class Pizza {
public:
	virtual ~Pizza();
private:
	std::string _name;
	std::string _dough;
	std::string _cauce;
protected:
	Pizza();
	void bake();
	void cur();
	void box();
	std::string getName();
};

class NYStyleCheesePizza :public Pizza {
public:
	NYStyleCheesePizza();
	~NYStyleCheesePizza();
};

#endif // !PIZZA_H
