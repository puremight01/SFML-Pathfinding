#pragma once
//class includes
#include "Behaviour.h"
class Seek :
	public Behaviour
{
public:
	//constructor for this Behaviour
	Seek();

	//moves the sprite 
	void Update(float dt);

private:
	//calculates the velocity vector 
	void Direction();

	//how fast the character can move
	int speed = 280;

	//how quickly the character can change direction (closer to 1 = lower mass and greater acceleration)
	float AccelConst = 0.0025f;
	
};

