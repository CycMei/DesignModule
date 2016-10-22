#include "Condiment.h"

Condiment::Condiment() {

}
Condiment::~Condiment() {

}
const std::string Condiment::getDescription() const {
	return "";
}



Mocha::Mocha(Beverage *beb) :beverage(beb) {

}
Mocha::~Mocha() {
	if (beverage) {
		delete beverage;
		beverage = nullptr;
	}
}
double Mocha::cost() {
	return 0.2 + beverage->cost();
}
const std::string Mocha::getDescription() const {
	return beverage->getDescription() + "..Mocha";
}
