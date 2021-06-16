#include "behaviour.h"

Behaviour::Behaviour()
{
	//this is the default constructor
}

void Behaviour::Update(float dt)
{
}

void Behaviour::BorderRule()
{
	//if below screen go to top
	if (Self->getPosition().y - (Self->getLocalBounds().height / 2) > ScreenY)
	{
		Self->setPosition(Self->getPosition().x, 0 - Self->getLocalBounds().height / 2);
	}
	//if above screen go to bottom
	else if (Self->getPosition().y + (Self->getLocalBounds().height / 2) < 0)
	{
		Self->setPosition(Self->getPosition().x, ScreenY + (Self->getLocalBounds().height / 2));
	}

	//if right of screen go to left
	if (Self->getPosition().x - (Self->getLocalBounds().width / 2) > ScreenX)
	{
		Self->setPosition(0 - Self->getLocalBounds().width / 2, Self->getPosition().y);
	}
	//if left of screen go to right 
	else if (Self->getPosition().x + (Self->getLocalBounds().width / 2) < 0)
	{
		Self->setPosition(ScreenX + (Self->getLocalBounds().width / 2) , Self->getPosition().y);
	}
}

sf::Vector2f Behaviour::shortest()
{
	//line to target
	sf::Vector2f direction = Other->getPosition() - Self->getPosition();

	//this activates if it is shorter to go around the screen rather than through it 
	if (direction.x > (ScreenX / 2) + Self->getLocalBounds().width || direction.x < (-ScreenX / 2) - Self->getLocalBounds().width)
	{
		//shorter to go off the left of screen 
		if (direction.x > (ScreenX / 2) + Self->getLocalBounds().width)
		{
			direction.x = -Self->getPosition().x + (Other->getPosition().x - ScreenX) - Self->getLocalBounds().width;
		}
		//shorter to go off the right of screen 
		else
		{
			direction.x = (ScreenX - Self->getPosition().x) + Other->getPosition().x + Self->getLocalBounds().width;
		}
	}
	//this activates if it is shorter to go around the screen rather than through it 
	if (direction.y > ((ScreenY / 2) + Self->getLocalBounds().height )|| direction.y < (-(ScreenY / 2) - Self->getLocalBounds().height))
	{
		//shorter to go off the top of screen 
		if (direction.y > (ScreenY / 2) + Self->getLocalBounds().height)
		{
			direction.y = -Self->getPosition().y + (Other->getPosition().y - ScreenY) - Self->getLocalBounds().height;
		}
		//shorter to go off the bot of screen 
		else
		{
			direction.y = (ScreenY - Self->getPosition().y) + Other->getPosition().y + Self->getLocalBounds().height;
		}
	}
	
	return direction;
}

sf::Vector2f Behaviour::Normalize(sf::Vector2f input)
{//calculate the vector from self to other 
	sf::Vector2f normalized = input;

	//calculate the distance between the 2 sprites
	float len = sqrt(normalized.x * normalized.x + normalized.y * normalized.y);

	//normalise the direction 
	if (len != 0)
	{
		normalized.x = normalized.x / len;
		normalized.y = normalized.y / len;
	}
	//set velocity to 0
	else
	{
		normalized.x = 0;
		normalized.y = 0;
	}
	
	//return the vector 
	return normalized;
}


