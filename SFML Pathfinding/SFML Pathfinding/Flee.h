#pragma once
//class includes
#include "Behaviour.h"
class Flee :
    public Behaviour
{
public:
	//constructor for this Behaviour
	Flee();
	Flee(sf::Sprite* OurSprite);

	//moves the sprite 
	void Update(float dt);

private:
	//calculates the velocity vector 
	void Direction();
	int speed = 300;


};

