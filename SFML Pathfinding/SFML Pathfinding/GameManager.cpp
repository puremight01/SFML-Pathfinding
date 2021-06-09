#include "GameManager.h"

GameManager::GameManager()
{
	AllChars.push_back(Character());
	AllChars.push_back(Character());
	
}

void GameManager::Load()
{
}

void GameManager::Draw(sf::RenderWindow* Window)
{
	for (auto index = AllChars.begin(); index != AllChars.end(); index++)
	{
		Window->draw(*((*index).Drawable));
	}
}

void GameManager::Update()
{
	for (auto index = AllChars.begin(); index != AllChars.end(); index++)
	{
		index->Update();
	}
}


