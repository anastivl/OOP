#pragma once
#include <string>

class String
{
public:
	String();				
	String(char* string);	
	String(String&);

	~String();
	
	bool isSymbol(char) const;				
	void swapSymbol(char, char) const;		
	void print() const;						
	
	int getSize() const;					
	char* getString();						
	void setString(std::string);			

private:
	char* _string;				
	int _size;					
};


