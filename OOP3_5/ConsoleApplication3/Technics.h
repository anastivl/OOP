#pragma once
#include <string>
#include "Products.h""
class Technics : public Products
{
public:
	Technics();
	Technics(std::string);
	Technics(std::string, std::string);
	~Technics();

	void setName(std::string);
	std::string getName();

private:
	std::string _name;

};

