#pragma once

//hpp includes
#include <SFML/Graphics.hpp>

//class includes
#include "Behaviour.h"
class Seek :
	public Behaviour
{
public:
	//constructor for this Behaviour
	Seek(sf::Sprite* OurSprite);

	//moves the sprite 
	void Update();

	void SetTarget(sf::Sprite* TargetSprite) { Other = TargetSprite; }

private:
	sf::Vector2f Velocity;
	sf::Sprite* Self;
	sf::Sprite* Other;
	//sf::Sprite* Target;
};

