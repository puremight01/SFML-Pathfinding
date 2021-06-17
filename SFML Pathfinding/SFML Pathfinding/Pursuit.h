#pragma once
#include "Behaviour.h"
class Pursuit :
    public Behaviour
{

public:
	//constructor for this Behaviour
	Pursuit();

	//moves the sprite 
	void Update(float dt);

	//point the target vel at the targets velocity 
	void setTarVel(sf::Vector2f* vel) { TargetVel = vel; };

	//point the target vel at the targets velocity 
	void setTarSpeed(int* speed) { TargetSpeed = speed; };

private:
	//calculates the velocity vector 
	void Direction();

	//how fast the character can move
	int speed = 250;

	//how quickly the character can change direction (closer to 1 = lower mass and greater acceleration)
	float AccelConst = 0.0025f;

	//information about the character that is being chased 
	sf::Vector2f *TargetVel;
	int* TargetSpeed;
};

