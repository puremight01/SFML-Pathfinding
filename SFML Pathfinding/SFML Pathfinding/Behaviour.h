#pragma once

//hpp includes
#include <SFML/Graphics.hpp>
class Behaviour
{
public:
	//Default constructor 
	Behaviour();

	// executes the behaviour
	virtual void Update(float dt);

	//sets the target for the behavior
	void SetTarget(sf::Sprite* TargetSprite) { Other = TargetSprite; }

	//sets the target for the behavior
	void SetSelf(sf::Sprite* SelfSprite) { Self = SelfSprite; }

	//get the velocity pointer ( not safe but used in pursuit
	sf::Vector2f* getVel() { return &Velocity; };

protected:
	//keeps the sprite on the screen
	void BorderRule();

	//finds the shortest path to targed taking into acount the border rule
	sf::Vector2f shortest();

	sf::Vector2f Normalize(sf::Vector2f input);

	//variables used in all Behaviour
	sf::Vector2f Velocity;
	sf::Sprite* Self;
	sf::Sprite* Other;

	//variables used for border rules
	int ScreenY = 600;
	int ScreenX = 800;
};

