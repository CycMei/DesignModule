#include"Duck.h"
#include"Behavior.h"
#include<iostream>

Duck::~Duck() {
	if (quackbehavior) {
		delete quackbehavior;
		quackbehavior = nullptr;
	}
	if (flybehavior) {
		delete flybehavior;
		flybehavior = nullptr;
	}
}
Duck::Duck(QuackBehavior * q, FlyBehavior * f):quackbehavior(q), flybehavior(f){

}
void Duck::perFormQuack() const {
	quackbehavior->quack();
}
void Duck::setQuackBehavior(QuackBehavior *q) {
	quackbehavior = q;
}
void Duck::perFormFly() const {
	flybehavior->fly();
}
void Duck::setFlyBehavior(FlyBehavior *f) {
	flybehavior = f;
}



MallardDuck::~MallardDuck() {

}
MallardDuck::MallardDuck() :Duck(new QuackForMallar(), new FlyForMallar()) {

}
void MallardDuck::display() const {
	std::cout << "11111111111.........." << std::endl;
}