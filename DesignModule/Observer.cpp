#include "Observer.h"
#include"Subject.h"
#include"DisplayElement.h"
Observer::Observer() {

}
Observer::~Observer() {

}



CurrentConditionDisplay::CurrentConditionDisplay(Subject *sub) :_sub(sub), temperature(0), humidity(0), pressure(0) {
	_sub->registerObserver(this);
}
CurrentConditionDisplay::~CurrentConditionDisplay() {
	if (_sub) {
		delete _sub;
		_sub = nullptr;
	}
}
void CurrentConditionDisplay::update(float temp, float hum, float pre) {
	temperature = temp;
	humidity = hum;
	pressure = pre;
	//_dis->display();
}
