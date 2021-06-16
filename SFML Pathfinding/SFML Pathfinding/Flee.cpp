#include "Flee.h"

Flee::Flee()
{
	Velocity = sf::Vector2f(0.0f, 0.0f);
}

void Flee::Update(float dt)
{
	//update velocity
	Direction();

	//move if i exist and then apply boarder rule
	if (Self != nullptr && Other != nullptr)
	{
		Self->setPosition(Self->getPosition() + (Velocity * dt * (float)speed));
		BorderRule();
	}
}

void Flee::Direction()
{
	if (Other != nullptr)
	{

		//calculate the vector from self to other then normalise it in the opposite direction 
		sf::Vector2f DesiredDirection = - Behaviour::Normalize(shortest());

		//normalise the velocity
		Velocity = Behaviour::Normalize(Velocity);
		
		//finds the steering force and changes it based on our acceleration constant
		sf::Vector2f SteeringForce = DesiredDirection - Velocity;
		Velocity += SteeringForce * AccelConst;
	}
}
