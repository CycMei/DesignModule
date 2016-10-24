#ifndef SINGLETON_H
#define SINGLETON_H
class Singleton {
private:
	static Singleton *_singleton;
	explicit Singleton() {

	}
public:
	static Singleton *getInstance() {
		if (!_singleton) {
			_singleton = new Singleton();
		}
		return _singleton;
	}
	~Singleton() {
		if (_singleton) {
			delete _singleton;
			_singleton = nullptr;
		}
	}
};
#endif // !SINGLETON_H
