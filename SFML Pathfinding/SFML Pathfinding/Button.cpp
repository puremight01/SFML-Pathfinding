#include "Button.h"

Button::Button(sf::RenderWindow* window)
{
	Window = window;
}

void Button::Update(float dt)
{
	//mouse over button 
	if (Behaviour::Self->getGlobalBounds().contains(sf::Mouse::getPosition(*Window).x, sf::Mouse::getPosition(*Window).y))
	{
		Behaviour::Self->setColor(sf::Color::Green);

		//mouse clicked
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			Function->Function();
		}
		
	}
	//mouse not over 
	else
	{
		Behaviour::Self->setColor(sf::Color::Blue);
	}
}
