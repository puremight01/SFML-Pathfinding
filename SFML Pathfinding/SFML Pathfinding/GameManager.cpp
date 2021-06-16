#include "GameManager.h"

GameManager::GameManager(sf::RenderWindow* window)
{
	Window = window;
	AllChars.push_back(Character(new Pursuit()));
	AllChars.push_back(Character(new MouseAttach(Window)));
	AllChars.push_back(Character(new Flee()));
	AllChars[0].MyBehaviour->SetTarget(AllChars[2].Drawable);
	AllChars[2].MyBehaviour->SetTarget(AllChars[1].Drawable);
	static_cast<Pursuit*>(AllChars[0].MyBehaviour)->setTarVel(AllChars[2].MyBehaviour->getVel());
	static_cast<Pursuit*>(AllChars[0].MyBehaviour)->setTarSpeed(&static_cast<Flee*>(AllChars[2].MyBehaviour)->speed);
	AllChars[0].Drawable->setPosition(500, 500);
	
}

void GameManager::Load()
{
}

void GameManager::Draw()
{
	//draw all of the characters
	for (auto index = AllChars.begin(); index != AllChars.end(); index++)
	{
		Window->draw(*((*index).Drawable));
	}
}

void GameManager::Update()
{
	//get the delta time and update all of the characters 
	sf::Time dt = deltaClock.restart();
	for (auto index = AllChars.begin(); index != AllChars.end(); index++)
	{
		index->Update(dt.asSeconds());
	}
}


