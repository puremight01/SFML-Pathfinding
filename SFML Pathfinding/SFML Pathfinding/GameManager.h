#pragma once
//hpp includes
#include <SFML/Graphics.hpp>

//class includes
#include"Character.h"
class GameManager
{
public:
	//creates the gamemanager (look into making a singleton)
	GameManager(sf::RenderWindow* window);

	//loads a level (need to figure out how these can be saved and chosen
	void Load();

	//draws all of the currently visable objects in 
	void Draw();

	//updates all of the actors
	void Update();

	void ClearScene();

	sf::RenderWindow* Window;

private:
	sf::Clock deltaClock;
	std::vector<Character> AllChars;
	
	//process input
	//load Scene
	//hold character list (interaction)
	//hold environment list (no interaction)
	//draw scene
};

