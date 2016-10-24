#include "SimpleRemoteControl.h"
#include "Command.h"

SimpleRemoteControl::SimpleRemoteControl(Command *command):_command(command) {

}
SimpleRemoteControl::~SimpleRemoteControl() {

}
void SimpleRemoteControl::setCommand(Command *command) {
	_command = command;
}
void SimpleRemoteControl::buttonWasPressed() {
	_command->execute();
}
