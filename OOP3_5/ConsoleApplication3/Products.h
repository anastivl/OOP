#pragma once
#include <string>
class Products
{
public:
	Products();
	Products(std::string);

	~Products();
	
	void setSerialNumber(std::string);
	std::string getSerialNumber();

private:
	std::string _serialNumber;
};

