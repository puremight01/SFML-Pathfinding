#include "Wander.h"

Wander::Wander()
{
	point = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / 7));
}

void Wander::Update(float dt)
{
	timer += dt;
	if (timer > 1)
	{
		spindir = rand() / 2;
		if (spindir == 0)
		{
			spindir = -1;
		}
		point = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / 7));

		timer = 0;
	}
	point += static_cast <float> (rand()) / (static_cast <float> (RAND_MAX /jitter)) * spindir;
	sf::Vector2f Dir = Behaviour::Normalize(Velocity);
	Dir.x += (Radius * sin(point));
	Dir.y += (Radius * cos(point));
	float len = sqrt(Dir.x * Dir.x + Dir.y * Dir.y);
	
	Dir = Behaviour::Normalize(Dir);
	
	Velocity = Dir;

	//move if i exist and then apply boarder rule
	if (Self != nullptr )
	{
		Self->setPosition(Self->getPosition() + (Velocity * dt * (float)speed));
		BorderRule();
	}
}
