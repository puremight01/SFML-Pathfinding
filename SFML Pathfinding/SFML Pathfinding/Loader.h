#pragma once
#include "ButtonFunction.h"

#include<iostream>
class Loader :
    public ButtonFunction
{
public:
	//constructor
	Loader(int Level);

	//loads the level
	void Function();

	int Level;
};

