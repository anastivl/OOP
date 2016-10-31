#include "stdafx.h"
#include "Products.h"
#include <iostream>

Products::Products()
{
	_serialNumber = "000AAA";
}

Products::Products(std::string serialNumber) : Products()
{
	_serialNumber = serialNumber;

}

Products::~Products() {}

std::string Products::getSerialNumber()
{
	return _serialNumber;
}

void::Products::setSerialNumber(std::string SerialNumber)
{
	_serialNumber = SerialNumber;
}