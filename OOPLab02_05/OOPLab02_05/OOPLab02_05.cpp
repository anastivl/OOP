// OOPLab02_05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "String.h"
#include <iostream>
#include <ctime>

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "RUS");

	String str1;
	str1.print();

	String str2("hello");
	str2.print();

	String str3(str2);
	str3.print();

	std::cout << "Size str3 = " << str3.getSize() << std::endl;

	std::cout << str3.isSymbol('H') << std::endl;;

	str3.swapSymbol('h', 'H');
	std::cout << str3.isSymbol('H') << std::endl;;


	// Task 01
	
	const int STRING_SIZE = 10;
	String strings[STRING_SIZE];
	strings[0].setString("Hello");
	strings[1].setString("Hello world");
	strings[2].setString("world");
	strings[3].setString("break");
	strings[4].setString("Ashgabad");
	strings[5].setString("string");
	strings[6].setString("void");
	strings[7].setString("main");
	strings[8].setString("google");
	strings[9].setString(".com");

	std::cout << "All string:" << std::endl;
	for (int i = 0; i < STRING_SIZE; i++)
	{
		std::cout << i << '\t' << strings[i].getSize() << '\t';
		strings[i].print();
	}
	 
	std::cout << "Task01" << std::endl;
	int sizeStr;
	std::cin >> sizeStr;

	for (int i = 0; i < STRING_SIZE; i++)
		if (strings[i].getSize() == sizeStr)
			strings[i].print();

	std::cout << "Task02" << std::endl;

	char* word = new char[];
	std::cin >> word;

	bool flag = true;		

	for (int i = 0; i < STRING_SIZE; i++)		
	{
		for (int j = 0; j < sizeof(word); j++)		
		{
			if (strings[i].isSymbol(word[j]) == false)		
			{
				flag = false;
				break;
			}
		}

		if (flag == true)			
			strings[i].print();

		flag = true;
	}

	return 0;
}



