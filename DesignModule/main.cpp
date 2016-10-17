#include<iostream>
#include<vld.h>

#include"Duck.h"

void test1() {
	Duck *mallardduck = new MallardDuck();
	mallardduck->display();
	mallardduck->perFormQuack();
	mallardduck->perFormFly();
	
	delete mallardduck;
}


void main() {
	test1();
}