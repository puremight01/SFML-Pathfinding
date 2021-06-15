#pragma once
#include "Behaviour.h"
class MouseAttach :
    public Behaviour
{
public:
	//constructor for this Behaviour
	MouseAttach(sf::RenderWindow* window);

	//moves the sprite to the cursor
	void Update(float dt);

private:
	//window to change mouse position relitive to 
	sf::RenderWindow* Window;
};

