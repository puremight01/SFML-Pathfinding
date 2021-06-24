#pragma once
//hpp includes
#include <SFML/Graphics.hpp>

//class includes
#include"LevelFactory.h"
class GameManager
{
public:
	GameManager();

	//creates the gamemanager (look into making a singleton)
	GameManager(sf::RenderWindow* window);

	//loads a level (need to figure out how these can be saved and chosen
	void load();

	//draws all of the currently visable objects in 
	void Draw();

	//updates all of the actors
	void Update();

	void ClearScene(int LvlIndex);

	sf::RenderWindow* Window;

private:
	sf::Clock deltaClock;
	std::vector<Character> AllChars;
	bool Clearing;
	std::vector<Character> NewChars;
	LevelFactory LevelLoader;
	
	//process input
	//load Scene
	//hold character list (interaction)
	//hold environment list (no interaction)
	//draw scene
};

