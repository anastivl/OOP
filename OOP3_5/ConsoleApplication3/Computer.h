#pragma once
#include <string>
#include "Technics.h"
class Computer : public Technics
{
public:
	Computer();
	Computer(int);
	Computer(std::string, std::string, int);

	~Computer();

	void setTypeCpu(int);
	int getTypeCpu();

	class Cpu
	{
	public:
		enum Type
		{
			i3, i5, i7
		};

	};

private:
	int _TypeCpu;
	bool isCorrect(int);
};

