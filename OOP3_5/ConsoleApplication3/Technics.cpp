#include "stdafx.h"
#include "Technics.h"
#include <iostream>

Technics::Technics() : Products()
{
	_name = "no name";
}

Technics::Technics(std::string name):Technics()
{
	_name = name;
}

Technics::Technics(std::string serialNumber, std::string name) : Products(serialNumber)
{
	_name = name;
}

Technics::~Technics() {}

std::string Technics:: getName()
{
	return _name;
}

void Technics::setName(std::string name)
{
	_name = name;
}