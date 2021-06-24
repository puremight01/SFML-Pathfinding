#pragma once
#include<vector>
#include"Character.h"
class LevelFactory
{
public:
	LevelFactory();

	std::vector<Character> LevelSelector(sf::RenderWindow* Window, int Index);

	std::vector<Character> SeekVsFlee(sf::RenderWindow* Window);
};

