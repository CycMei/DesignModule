#include"Duck.h"
#include"Behavior.h"

Duck::Duck(QuackBehavior * q, FlyBehavior * f):quackbehavior(q), flybehavior(f){

}
void Duck::perFormQuack() {
	quackbehavior->quack();
}
void Duck::setQuackBehavior(QuackBehavior *q) {
	quackbehavior = q;
}
void Duck::perFormFly() {
	flybehavior->fly();
}
void Duck::setFlyBehavior(FlyBehavior *f) {
	flybehavior = f;
}
