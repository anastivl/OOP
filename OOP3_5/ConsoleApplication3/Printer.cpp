#include "stdafx.h"
#include "Printer.h"
#include <iostream>

Printer::Printer() :Technics()
{
	_speedPrint = 0;
}

Printer::Printer(int SpeedPrint) : Technics()
{
	isCorrect(SpeedPrint);
}

Printer::Printer(std::string serialNumber, std::string name, int SpeedPrint) : Technics(serialNumber, name)
{
	isCorrect(SpeedPrint);
}

Printer::~Printer()
{
}

int Printer::getSpeedPrint()
{
	return _speedPrint;
}

void Printer::setSpeedPrint(int SpeedPrint)
{
	isCorrect(SpeedPrint);
}

bool Printer::isCorrect(int speedPrint)
{
	_speedPrint = 0;

	if (speedPrint > 0)
		_speedPrint = speedPrint;
	else {
		std::cout << "Incorrect speed print" << std::endl;
		return false;
	}

	return true;
}