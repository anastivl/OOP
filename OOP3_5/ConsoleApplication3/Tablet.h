#pragma once
#include <string>
#include "Technics.h"
class Tablet : public Technics
{
public:
	Tablet();
	Tablet(int);
	Tablet(std::string, std::string, int);

	~Tablet();

	void setDiagonal(int);
	int getDiagonal();

private:
	int _diagonal;
	bool isCorrect(int);
};

