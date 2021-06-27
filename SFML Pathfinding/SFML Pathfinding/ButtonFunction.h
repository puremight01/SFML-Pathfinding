#pragma once
#include<string>
class ButtonFunction
{
public:
	//constructor
	ButtonFunction();

	//virtual function called each update
	virtual void Function() = 0;

	std::string Text;
};