#ifndef SIMPLEREMOTECONTROL_H
#define SIMPLEREMOTECONTROL_H
class Command;
class SimpleRemoteControl {
public:
	explicit SimpleRemoteControl(Command*);
	~SimpleRemoteControl();
	void setCommand(Command *command);
	void buttonWasPressed();
private:
	Command *_command;
};
#endif // !SIMPLEREMOTECONTROL_H
