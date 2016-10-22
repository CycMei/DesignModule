#ifndef PIZZASTORE_H
#define PIZZASTORE_H
#include<string>
class Pizza;
class PizzaStore {
public:
	Pizza *orderPizza(const std::string&) const;
	virtual ~PizzaStore();
protected:
	explicit PizzaStore();
	virtual Pizza *createPizza(const std::string&) const = 0;
private:
};

class NYPizzaStore :public PizzaStore {
public:
	NYPizzaStore();
	~NYPizzaStore();
	virtual Pizza *createPizza(const std::string&) const override;
};

#endif // !PIZZASTORE_H
