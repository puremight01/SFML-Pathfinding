#include "Seek.h"

Seek::Seek()
{
	Velocity = sf::Vector2f(0.0f, 0.0f);
}


void Seek::Update(float dt)
{
	//update velocity
	Direction();

	//move if i exist and then apply boarder rule
	if (Self != nullptr && Other != nullptr)
	{
		Self->setPosition(Self->getPosition() + (Velocity * dt *(float)speed));
		BorderRule();
	}
}

void Seek::Direction()
{
	if (Other != nullptr)
	{

		//calculate the vector from self to other and normalize it 
		sf::Vector2f DesiredDirection = Behaviour::Normalize( shortest());
		
		//calculate the normalized velocity 
		Velocity = Behaviour::Normalize(Velocity);

		// calculate and apply the steering force
		sf::Vector2f SteeringForce = DesiredDirection - Velocity;
		Velocity += SteeringForce * AccelConst;
	}
}
