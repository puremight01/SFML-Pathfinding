#include "Loader.h"
#include"Externs.h"


Loader::Loader(int Level)
{
	this->Level = Level;
}

void Loader::Function()
{
	std::cout << "yeet";
	
	Game->ClearScene(Level);
}
