#pragma once
#include <string>
#include "Technics.h"
class Printer : public Technics
{
public:
	Printer();
	Printer(int);
	Printer(std::string, std::string, int);

	~Printer();

	void setSpeedPrint(int);
	int getSpeedPrint();

private:

	int _speedPrint;
	bool isCorrect(int);
};

