#include "stdafx.h"
#include "Tablet.h"
#include <iostream>

Tablet::Tablet() : Technics()
{
	_diagonal = 0;
}

Tablet::Tablet(int diagonal) : Technics()
{
	isCorrect (diagonal);
}

Tablet::Tablet(std::string SerialNumber, std::string name, int diagonal) : Technics(SerialNumber, name)
{
	isCorrect(diagonal);
}

Tablet::~Tablet()
{
}

int Tablet::getDiagonal()
{
	return _diagonal;
}
void Tablet::setDiagonal(int diagonal)
{
	isCorrect(diagonal);
}
bool Tablet::isCorrect(int diagonal)
{
	_diagonal = 0;
	if (diagonal > 0)
	_diagonal = diagonal;
	else
	{
		std::cout << "Incorrect diagonal" << std::endl;
		return false;
	}

	return true;

}