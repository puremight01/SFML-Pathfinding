#include "MouseAttach.h"

MouseAttach::MouseAttach(sf::RenderWindow* window)
{
	//set the window pointer 
	Window = window;
}

void MouseAttach::Update(float dt)
{
	//move the sprite to the cursor
	Self->setPosition(sf::Mouse::getPosition(*Window).x, sf::Mouse::getPosition(*Window).y);
}
