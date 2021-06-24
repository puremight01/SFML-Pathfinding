#include "LevelFactory.h"

LevelFactory::LevelFactory()
{
}

std::vector<Character> LevelFactory::LevelSelector(sf::RenderWindow* Window, int Index)
{
	switch (Index) {
	case 1:
		return SeekVsFlee(Window);
		break;

	}
	
}

std::vector<Character> LevelFactory::SeekVsFlee(sf::RenderWindow* Window)
{
	std::vector<Character> NewChars;
	NewChars.push_back(Character(new Pursuit()));
	NewChars.push_back(Character(new MouseAttach(Window)));
	NewChars.push_back(Character(new Wander()));
	NewChars.push_back(Character(new Button(Window, new Loader(1))));
	NewChars[0].MyBehaviour->SetTarget(NewChars[2].Drawable);
	//AllChars[2].MyBehaviour->SetTarget(AllChars[1].Drawable);
	static_cast<Pursuit*>(NewChars[0].MyBehaviour)->setTarVel(NewChars[2].MyBehaviour->getVel());
	static_cast<Pursuit*>(NewChars[0].MyBehaviour)->setTarSpeed(&static_cast<Flee*>(NewChars[2].MyBehaviour)->speed);
	NewChars[0].Drawable->setPosition(500, 500);
	return NewChars;
}
