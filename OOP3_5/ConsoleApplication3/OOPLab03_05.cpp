#include "stdafx.h"
#include <iostream>
#include "Products.h"
#include "Technics.h"
#include "Printer.h"
#include "Scanner.h"
#include "Computer.h"
#include "Tablet.h"

int main()
{
	std::cout << "----- OOPLab03_05 ------\n" << std::endl;

	Printer printer("1234ABCD", "Samsung", 60);

	std::cout << "Serial number:\t" << printer.getSerialNumber() << std::endl;
	std::cout << "Name:\t\t" << printer.getName() << std::endl;
	std::cout << "Speed print:\t" << printer.getSpeedPrint() << std::endl;
	std::cout << "------------------------" << std::endl;

	Scanner scanner("1234FFFF", "HP", 10);

	std::cout << "Serial number:\t" << scanner.getSerialNumber() << std::endl;
	std::cout << "Name:\t\t" << scanner.getName() << std::endl;
	std::cout << "Speed read:\t" << scanner.getSpeedRead() << std::endl;
	std::cout << "------------------------" << std::endl;

	Computer computer("FFFFFFFF", "Asus", Computer::Cpu::Type::i7);

	std::cout << "Serial number:\t" << computer.getSerialNumber() << std::endl;
	std::cout << "Name:\t\t" << computer.getName() << std::endl;
	std::cout << "Type CPU:\t" << computer.getTypeCpu() << std::endl;
	std::cout << "------------------------" << std::endl;

	Tablet tablet("AAAABBBB", "TeXet", 7);

	std::cout << "Serial number:\t" << tablet.getSerialNumber() << std::endl;
	std::cout << "Name:\t\t" << tablet.getName() << std::endl;
	std::cout << "Diagonal:\t" << tablet.getDiagonal() << std::endl;
	std::cout << "------------------------" << std::endl;

	Technics technics("Acer");

	std::cout << "Serial number:\t" << technics.getSerialNumber() << std::endl;
	std::cout << "Name:\t\t" << technics.getName() << std::endl;
	std::cout << "------------------------" << std::endl;

	Products product("0ABC1234");

	std::cout << "Serial number:\t" << technics.getSerialNumber() << std::endl;
	std::cout << "------------------------" << std::endl;

	return 0;
}

