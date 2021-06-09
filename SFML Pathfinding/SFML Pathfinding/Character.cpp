#include "Character.h"

Character::Character()
{
	//white empty texture
	sf::Texture tex = sf::Texture();

	//pixles in the texture
	tex.create(100, 100);

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
	this->MyBehaviour = new Seek(Drawable);
}

void Character::Update()
{
	MyBehaviour->Update();
}
