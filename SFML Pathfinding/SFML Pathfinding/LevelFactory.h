#pragma once
#include<vector>
#include"Character.h"
class LevelFactory
{
public:
	LevelFactory();

	std::vector<Character> LevelSelector(sf::RenderWindow* Window, int Index);

private:

	std::vector<Character> SeekVsFlee(sf::RenderWindow* Window);

	std::vector<Character> SeekVsWander(sf::RenderWindow* Window);

	std::vector<Character> SeekVsMouse(sf::RenderWindow* Window);

	std::vector<Character> ArriveVsFlee(sf::RenderWindow* Window);

	std::vector<Character> ArriveVsWander(sf::RenderWindow* Window);

	std::vector<Character> ArriveVsMouse(sf::RenderWindow* Window);

	std::vector<Character> PursuitVsFlee(sf::RenderWindow* Window);

	std::vector<Character> PursuitVsWander(sf::RenderWindow* Window);

	std::vector<Character> PursuitVsMouse(sf::RenderWindow* Window);


};

