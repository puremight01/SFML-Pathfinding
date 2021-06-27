#include "Character.h"

Character::Character(Behaviour* behaviour)
{
	//white empty texture
	sf::Texture tex = sf::Texture();

	//pixles in the texture
	tex.create(25, 25);

	//create a new sprite
	Drawable = new sf::Sprite();

	//set the sprite info with the texture
	Drawable->setTexture(tex);

	//change color 
	Drawable->setColor(sf::Color::Blue);

	//scale
	Drawable->setScale(sf::Vector2f(1.0f, 1.0f));

	//sets origin to the center of the sprite
	Drawable->setOrigin(Drawable->getLocalBounds().width / 2, Drawable->getLocalBounds().height / 2);

	//position 
	Drawable->setPosition(sf::Vector2f(400.0f, 300.0f));

	//set behaviour
	this->MyBehaviour = behaviour;

	//set self on behaviours
	this->MyBehaviour->SetSelf(Drawable);
}

void Character::Update(float dt)
{
	//updates the sprite based on the behaviour 
	MyBehaviour->Update(dt);
}
