#pragma once
//hpp includes
#include <SFML/Graphics.hpp>

//header includes
#include"Behaviour.h"
#include"Seek.h"

class Character
{
public:
	//needs to have
	//drawable object
	
	//creates our objects
	
	//default constructor
	Character();

	// updates this object based on MyBehaviour
	void Update();

	//holds the renderable part of the object
	sf::Sprite* Drawable;

	// This Characters behaviour
	Behaviour* MyBehaviour;

private:
	
	
	
};

