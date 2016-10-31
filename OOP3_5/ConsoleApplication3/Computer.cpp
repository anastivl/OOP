#include "stdafx.h"
#include "Computer.h"
#include <iostream>

Computer::Computer() :Technics()
{
	_TypeCpu = Computer::Cpu::Type::i3;
}

Computer::Computer(int  TypeCpu) : Computer()
{
	isCorrect(TypeCpu);
}

Computer::Computer(std::string serialNumber, std::string name, int TypeCpu) : Technics(serialNumber,name)
{
	isCorrect(TypeCpu);
}

Computer::~Computer()
{
}

int Computer:: getTypeCpu()
{
	return _TypeCpu;
}

void Computer::setTypeCpu(int TypeCpu)
{
	isCorrect(TypeCpu);
}
bool Computer::isCorrect(int TypeCpu)
{
	_TypeCpu = Computer::Cpu::Type::i3;
	switch (TypeCpu)
	{
	case Computer::Cpu::Type::i3:
			_TypeCpu = Computer::Cpu::Type::i3;
			break;
	case Computer::Cpu::Type::i5:
				_TypeCpu = Computer::Cpu::Type::i5;
				break;
	case Computer::Cpu::Type::i7:
		_TypeCpu = Computer::Cpu::Type::i7;
		break;
	default:
		std::cout << "Incorrect type CPU" << std::endl;

		return false;
	}
	return true;
}