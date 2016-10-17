#include"Behavior.h"
#include<iostream>
QuackBehavior::QuackBehavior() {

}
QuackBehavior::~QuackBehavior() {

}

QuackForMallar::QuackForMallar() {

}
QuackForMallar::~QuackForMallar() {

}
void QuackForMallar::quack() const {
	std::cout << "quack..........." << std::endl;
}





FlyBehavior::FlyBehavior() {

}
FlyBehavior::~FlyBehavior() {

}

FlyForMallar::FlyForMallar() {

}
FlyForMallar::~FlyForMallar() {

}
void FlyForMallar::fly() const {
	std::cout << "fly..........." << std::endl;
}