#pragma once
class ButtonFunction
{
public:
	//constructor
	ButtonFunction();

	//virtual function called each update
	virtual void Function() = 0;
};