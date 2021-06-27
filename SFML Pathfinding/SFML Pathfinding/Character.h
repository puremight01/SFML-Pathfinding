#pragma once
//hpp includes
#include <SFML/Graphics.hpp>

//header includes
#include"Behaviour.h"
#include"Seek.h"
#include"Flee.h"
#include"MouseAttach.h"
#include"Arrive.h"
#include"Wander.h"
#include"Pursuit.h"
#include"Button.h"
#include"Flock.h"


class Character
{
public:
	//needs to have
	//drawable object
	
	//creates our objects
	
	//default constructor
	Character(Behaviour* behaviour);

	// updates this object based on MyBehaviour
	void Update(float dt);

	//holds the renderable part of the object
	sf::Sprite* Drawable;

	// This Characters behaviour
	Behaviour* MyBehaviour;

private:
	
	
	
};

