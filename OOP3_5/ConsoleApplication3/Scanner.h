#pragma once
#include <string>
#include "Technics.h"
class Scanner : public Technics
{
public:
	Scanner();
	Scanner(int);
	Scanner(std::string, std::string, int);

	~Scanner();

	void setSpeedRead(int);
	int getSpeedRead();

private:
	int _speedRead;
	bool isCorrect(int);
};

