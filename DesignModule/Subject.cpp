#include "Subject.h"
#include"Observer.h"
#include<iostream>
Subject::Subject() {

}
Subject::~Subject() {

}



WeatherData::WeatherData() :temperature(0), humidity(0), pressure(0), ObsVec() {

}
WeatherData::~WeatherData() {

}
bool WeatherData::registerObserver(Observer *obs) {
	return comMethod(std::string("add"), obs);
}
bool WeatherData::removeObserver(Observer *obs) {
	return comMethod(std::string("remove"), obs);
}

bool WeatherData::comMethod(const std::string &str , Observer *obs) {
	for (std::vector<Observer*>::iterator beg = ObsVec.begin(); beg != ObsVec.end(); ++beg) {
		if (*beg == obs) {
			if (str == "add") {
				std::cout << "add false。。。。。。。。。。。" << std::endl;
				return false;
			}
			else if(str=="remove"){
				ObsVec.erase(beg);
				std::cout << "remove success。。。。。。。。。。。" << std::endl;
				return true;
			}
		}
	}
	if (str == "add") {
		ObsVec.push_back(obs);
		std::cout << "add success。。。。。。。。。。。" << std::endl;
		return true;
	}
	else if(str=="remove") {
		std::cout << "remove false。。。。。。。。。。。" << std::endl;
		return false;
	}
	std::cout << "嬉蝕議圭塀音屎鳩。。。。。。。。。。" << std::endl;
	return false;
}
void WeatherData::notifyObserver() {
	for (auto &c : ObsVec) {
		c->update(temperature, humidity, pressure);
	}
}
void WeatherData::measurementsChanged() {
	notifyObserver();
}
