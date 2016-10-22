#include "PizzaStore.h"
#include "Pizza.h"

PizzaStore::PizzaStore() {

}
PizzaStore::~PizzaStore() {

}

Pizza *PizzaStore::orderPizza(const std::string &type) const {
	return createPizza(type);
}


NYPizzaStore::NYPizzaStore() {

}
NYPizzaStore::~NYPizzaStore() {

}
Pizza *NYPizzaStore::createPizza(const std::string &type) const {
	return nullptr;
}