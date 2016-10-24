#ifndef COMMAND_H
#define COMMAND_H
class Command {
protected:
	Command();
	~Command();
public:
	virtual void execute()=0;
};

class LightOnCommand :public Command {
public:
	LightOnCommand();
	~LightOnCommand();
	void execute() override;
};

#endif // !COMMAND_H
