#ifndef COFFEE_H
#define COFFEE_H
#include "Beverage.h"
class Coffee:public Beverage {
public:
	Coffee();
	~Coffee();
	double cost() override;
};
#endif // !COFFEE_H
