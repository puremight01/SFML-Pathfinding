#pragma once
//class includes
#include "Behaviour.h"
class Flee :
    public Behaviour
{
public:
	//constructor for this Behaviour
	Flee();

	//moves the sprite 
	void Update(float dt);

	//how fast the character can move
	int speed = 250;

private:
	//calculates the velocity vector 
	void Direction();
	
	//how quickly the character can change direction (closer to 1 = lower mass and greater acceleration)
	float AccelConst = 0.0025f;

};

