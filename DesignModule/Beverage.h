#ifndef BEVERAGE_H
#define BEVERAGE_H
#include<string>
class Beverage {
public:
	virtual ~Beverage();
	virtual const std::string getDescription() const;
	virtual double cost() = 0;
protected:
	Beverage();
public:
	std::string description="unknow beverage...";
};
#endif