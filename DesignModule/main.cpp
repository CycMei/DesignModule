#include<iostream>
#include<memory>
#include<vld.h>

#include"Duck.h"

#include"Observer.h"
#include"Subject.h"

#include"Beverage.h"
#include"Coffee.h"
#include"Condiment.h"

#include"Pizza.h"
#include"PizzaStore.h"

void test1() {
	Duck *mallardduck = new MallardDuck();
	mallardduck->display();
	mallardduck->perFormQuack();
	mallardduck->perFormFly();
	
	delete mallardduck;
}

void test2() {
	Subject *sub = new WeatherData();
	Observer *obs = new CurrentConditionDisplay(sub);
	sub->notifyObserver();
	delete obs;
	obs = nullptr;
}

void test3() {
	Beverage *bev = new Coffee();
	bev = new Mocha(bev);
	std::cout << bev->cost() << "   " << bev->getDescription() << std::endl;
	delete bev;
	bev = nullptr;
}

void test4() {
	std::shared_ptr<PizzaStore> pizestore = std::make_shared<NYPizzaStore>(NYPizzaStore());
	pizestore->orderPizza("cyc");
}

void main() {
	test4();
}