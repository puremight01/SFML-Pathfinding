#pragma once
//class includes
#include "Behaviour.h"
class Seek :
	public Behaviour
{
public:
	//constructor for this Behaviour
	Seek();
	Seek(sf::Sprite* OurSprite);

	//moves the sprite 
	void Update(float dt);

private:
	//calculates the velocity vector 
	void Direction();
	int speed = 250;

	
};

