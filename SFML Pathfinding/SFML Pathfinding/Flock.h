#pragma once
//class includes
#include "Behaviour.h"
class Flock :
	public Behaviour
{
public:

	//constructor for this Behaviour
	Flock(std::vector<Flock*>* TheFlock);

	//moves the sprite 
	void Update(float dt);


	//how fast the character can move
	int speed = 250;

	sf::Vector2f Velocity;
	sf::Vector2f Position;

private:
	//calculates the velocity vector 
	void Direction();
	sf::Vector2f separate();
	sf::Vector2f align();
	sf::Vector2f cohesion();

	std::vector<Flock*>* TheFlock;
	//how quickly the character can change direction (closer to 1 = lower mass and greater acceleration)
	float AccelConst = 0.005f;
};

