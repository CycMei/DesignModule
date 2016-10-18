#ifndef SUBJECT_H
#define SUBJECT_H
#include<vector>
#include<string>
class Observer;
class Subject {
public:
	virtual ~Subject();
	virtual bool registerObserver(Observer*) = 0;
	virtual bool removeObserver(Observer*) = 0;
	virtual void notifyObserver() = 0;
protected:
	Subject();
};

class WeatherData :public Subject {
public:
	WeatherData();
	~WeatherData();
	bool registerObserver(Observer*) override;
	bool removeObserver(Observer*) override;
	void notifyObserver() override;

	void getTemperature() const;
	void getHumidity() const;
	void getPressure() const;
	void measurementsChanged();
private:
	float temperature;
	float humidity;
	float pressure;
	std::vector<Observer*> ObsVec;
	bool comMethod(const std::string&,Observer*);
};

#endif