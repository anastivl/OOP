#include "stdafx.h"
#include "Scanner.h"
#include <iostream>

Scanner::Scanner() :Technics()
{
	_speedRead = 0;
}

Scanner::Scanner(int speedRead) : Technics()
{
	isCorrect(speedRead);
}

Scanner::Scanner(std::string serialNumber, std::string name, int speedRead) : Technics(serialNumber, name)
{
	isCorrect(speedRead);
}

Scanner::~Scanner()
{
}

int Scanner:: getSpeedRead()
{
	return _speedRead;
}
void Scanner::setSpeedRead(int speedRead)
{
	isCorrect(speedRead);
}
bool Scanner::isCorrect(int speedRead)
{
	_speedRead = 0;

	if (speedRead > 0)
		_speedRead = speedRead;
	else {
		std::cout << "Incorrect speed read" << std::endl;
		return false;
	}

	return true;
}