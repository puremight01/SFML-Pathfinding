#include "Flee.h"

Flee::Flee()
{
	Velocity = sf::Vector2f(0.0f, 0.0f);
}

Flee::Flee(sf::Sprite* OurSprite)
{
	Behaviour::SetSelf(OurSprite);
	Velocity = sf::Vector2f(0.0f, 0.0f);
}

void Flee::Update(float dt)
{
	Direction();
	if (Self != nullptr && Other != nullptr)
	{
		Self->setPosition(Self->getPosition() + (Velocity * dt * (float)speed));
	}
	BorderRule();
}

void Flee::Direction()
{
	if (Other != nullptr)
	{

		//calculate the vector from self to other 
		sf::Vector2f direction = - shortest();


		//calculate the distance between the 2 sprites
		float len = sqrt(direction.x * direction.x + direction.y * direction.y);

		//normalise the direction 
		if (len != 0)
		{
			Velocity.x = direction.x / len;
			Velocity.y = direction.y / len;
		}
		//set velocity to 0
		else
		{
			Velocity.x = 0;
			Velocity.y = 0;
		}
	}
}
