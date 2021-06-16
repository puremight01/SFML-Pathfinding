#include "Arrive.h"

Arrive::Arrive()
{
	Velocity = sf::Vector2f(0.0f, 0.0f);
}

void Arrive::Update(float dt)
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

void Arrive::Direction()
{
	if (Other != nullptr)
	{

		//calculate the vector from self to other 
		sf::Vector2f ToTarget = shortest();

		//find the distance to the target position
		float LenToTarget = sqrt(ToTarget.x * ToTarget.x + ToTarget.y * ToTarget.y);

		// normalize the desiredDirection
		sf::Vector2f DesiredDirection = Behaviour::Normalize(ToTarget);

		//calculate the normalized velocity 
		Velocity = Behaviour::Normalize(Velocity);

		// calculate and apply the steering force
		sf::Vector2f SteeringForce = DesiredDirection - Velocity;
		Velocity += SteeringForce * AccelConst;

		//if in the stoping distance slow down to stop 
		if (LenToTarget < StopingDist)
		{
			Velocity *= (LenToTarget / StopingDist);
		}
	}
}
