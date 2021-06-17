#pragma once
#include "Behaviour.h"
class Arrive :
    public Behaviour
{
public:
	//constructor for this Behaviour
	Arrive();

	//moves the sprite 
	void Update(float dt);

private:
	//calculates the velocity vector 
	void Direction();

	//how fast the character can move
	int speed = 250;

	//how quickly the character can change direction (closer to 1 = lower mass and greater acceleration)
	float AccelConst = 0.0025f;

	//how far away a arriver will begin to slow down 
	int StopingDist = 150;
};

