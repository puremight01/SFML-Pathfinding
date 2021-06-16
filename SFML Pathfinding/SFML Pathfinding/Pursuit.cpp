#include "Pursuit.h"

Pursuit::Pursuit()
{
	Velocity = sf::Vector2f(0.0f, 0.0f);
}


void Pursuit::Update(float dt)
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

void Pursuit::Direction()
{
	if (Other != nullptr)
	{

		//calculate the vector from self to other
		sf::Vector2f temp = shortest();

		//calculate the distance between the 2 vectors
		float len = sqrt(temp.x * temp.x + temp.y * temp.y);	

		sf::Vector2f DesiredDirection = Behaviour::Normalize(((len/speed) * *TargetSpeed * *TargetVel ) + temp);

		//calculate the normalized velocity 
		Velocity = Behaviour::Normalize(Velocity);

		// calculate and apply the steering force
		sf::Vector2f SteeringForce = DesiredDirection - Velocity;
		Velocity += SteeringForce * AccelConst;
	}
}