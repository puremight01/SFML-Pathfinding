#include "Seek.h"

Seek::Seek(sf::Sprite* OurSprite)
{
	Self = OurSprite;
	Velocity = sf::Vector2f(0.0f, 0.0f);
}

void Seek::Update()
{
	if (Self != nullptr && Other != nullptr)
	{
		Self->setPosition(Other->getPosition() - Self->getPosition());
	}
}
