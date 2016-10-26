#ifndef SIMPLEREMOTECONTROL_H
#define SIMPLEREMOTECONTROL_H
#include<memory>
class Command;
class SimpleRemoteControl {
public:
	explicit SimpleRemoteControl(std::shared_ptr<Command>);
	~SimpleRemoteControl();
	void setCommand(Command *command);
	void buttonWasPressed();
private:
	std::shared_ptr<Command> _command;
};
#endif // !SIMPLEREMOTECONTROL_H
