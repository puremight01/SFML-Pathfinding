#pragma once
//hpp includes
#include <SFML/Graphics.hpp>

//class includes
#include"Character.h"
class GameManager
{
public:
	//creates the gamemanager (look into making a singleton)
	GameManager();

	//loads a level (need to figure out how these can be saved and chosen
	void Load();

	//draws all of the currently visable objects in 
	void Draw(sf::RenderWindow* Window);

	void ClearScene();

private:

	std::vector<Character> AllChars;
	//process input
	//load Scene
	//hold character list (interaction)
	//hold environment list (no interaction)
	//draw scene
};

