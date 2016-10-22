#ifndef CONDIMENT_H
#define CONDIMENT_H
#include "Beverage.h"
#include<string>
class Condiment :public Beverage {
public:
	Condiment();
	~Condiment();
	const std::string getDescription() const override;
};

class Mocha :public Condiment {
private:
	Beverage *beverage;
public:
	explicit Mocha(Beverage*);
	~Mocha();
	double cost() override;
	const std::string getDescription() const override;
};


#endif // !CONDIMENT_H
