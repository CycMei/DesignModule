#include<iostream>
#include<vld.h>

#include"Duck.h"

#include"Observer.h"
#include"Subject.h"

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


void main() {
	test2();
}