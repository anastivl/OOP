#include "stdafx.h"
#include <iostream>
#include "String.h"

String::String()
{
	std::cout << "String();" << std::endl;	

	_string = new char();					
	_size = 0;								
}

String::String(char* string)
{
	std::cout << "String(std::string string);" << std::endl;

	_size = sizeof(string) +1 ;				
	_string = new char[_size];				

	for (int i = 0; i < _size; i++)
	{
		_string[i] = string[i];				
	}

	_string[_size] = '\n';
}

String::String(String& string)
{
	std::cout << "String(String& string);" << std::endl;

	_size = string._size;
	_string = string._string;
}

String::~String()
{
	std::cout << "~String();" << std::endl;

	_size = 0;
}

void String::print() const
{
	for (int i = 0; i < _size; i++)
		std::cout << _string[i];

	std::cout << std::endl;
}

int String::getSize() const
{
	return _size;
}

bool String::isSymbol(char symbol) const
{
	for (int i = 0; i < _size; i++)
	{
		if (_string[i] == symbol)			
			return true;
	}

	return false;
}

void String::swapSymbol(char symbol1, char symbol2) const
{
	for (int i = 0; i < _size; i++)
	{
		if (_string[i] == symbol1)
			_string[i] = symbol2;
	}
}

char* String::getString() 
{
	return _string;
}

void String::setString(std::string string)
{
	_size = string.size();
	_string = new char[_size];

	for (int i = 0; i < _size; i++)
	{
		_string[i] = string[i];
	}

	_string[_size] = '\n';
}

 

