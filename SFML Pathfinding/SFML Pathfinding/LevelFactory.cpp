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
	case 2:
		return SeekVsWander(Window);
		break;
	case 3:
		return SeekVsMouse(Window);
		break;
	case 4:
		return ArriveVsFlee(Window);
		break;
	case 5:
		return ArriveVsWander(Window);
		break;
	case 6:
		return ArriveVsMouse(Window);
		break;
	case 7:
		return PursuitVsFlee(Window);
		break;
	case 8:
		return PursuitVsWander(Window);
		break;
	case 9 :
		return PursuitVsMouse(Window);
		break;
	}
	
}

std::vector<Character> LevelFactory::SeekVsFlee(sf::RenderWindow* Window)
{
	std::vector<Character> NewChars;
	NewChars.push_back(Character(new Seek()));
	NewChars.push_back(Character(new MouseAttach(Window)));
	NewChars.push_back(Character(new Flee()));
	NewChars.push_back(Character(new Button(Window, new Loader(1))));
	NewChars.push_back(Character(new Button(Window, new Loader(2))));
	NewChars.push_back(Character(new Button(Window, new Loader(3))));
	NewChars.push_back(Character(new Button(Window, new Loader(4))));
	NewChars.push_back(Character(new Button(Window, new Loader(5))));
	NewChars.push_back(Character(new Button(Window, new Loader(6))));
	NewChars.push_back(Character(new Button(Window, new Loader(7))));
	NewChars.push_back(Character(new Button(Window, new Loader(8))));
	NewChars.push_back(Character(new Button(Window, new Loader(9))));

	NewChars[0].MyBehaviour->SetTarget(NewChars[2].Drawable);
	NewChars[0].Drawable->setPosition(500, 500);
	NewChars[2].MyBehaviour->SetTarget(NewChars[0].Drawable);
	//button 1
	NewChars[3].Drawable->setPosition(1040, 80);
	NewChars[3].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2								
	NewChars[4].Drawable->setPosition(1130, 80);
	NewChars[4].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2								
	NewChars[5].Drawable->setPosition(1220, 80);
	NewChars[5].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 1
	NewChars[6].Drawable->setPosition(1040, 140);
	NewChars[6].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2								 
	NewChars[7].Drawable->setPosition(1130, 140);
	NewChars[7].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2								 
	NewChars[8].Drawable->setPosition(1220, 140);
	NewChars[8].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 1
	NewChars[9].Drawable->setPosition(1040, 200);
	NewChars[9].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2
	NewChars[10].Drawable->setPosition(1130, 200);
	NewChars[10].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2
	NewChars[11].Drawable->setPosition(1220, 200);
	NewChars[11].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	return NewChars;
}

std::vector<Character> LevelFactory::SeekVsWander(sf::RenderWindow* Window)
{
	std::vector<Character> NewChars;
	NewChars.push_back(Character(new Seek()));
	NewChars.push_back(Character(new MouseAttach(Window)));
	NewChars.push_back(Character(new Wander()));
	NewChars.push_back(Character(new Button(Window, new Loader(1))));
	NewChars.push_back(Character(new Button(Window, new Loader(2))));
	NewChars.push_back(Character(new Button(Window, new Loader(3))));
	NewChars.push_back(Character(new Button(Window, new Loader(4))));
	NewChars.push_back(Character(new Button(Window, new Loader(5))));
	NewChars.push_back(Character(new Button(Window, new Loader(6))));
	NewChars.push_back(Character(new Button(Window, new Loader(7))));
	NewChars.push_back(Character(new Button(Window, new Loader(8))));
	NewChars.push_back(Character(new Button(Window, new Loader(9))));
	NewChars[0].MyBehaviour->SetTarget(NewChars[2].Drawable);
	NewChars[0].Drawable->setPosition(500, 500);
	//button 1
	NewChars[3].Drawable->setPosition(1040, 80);
	NewChars[3].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2								
	NewChars[4].Drawable->setPosition(1130, 80);
	NewChars[4].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2								
	NewChars[5].Drawable->setPosition(1220, 80);
	NewChars[5].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 1
	NewChars[6].Drawable->setPosition(1040, 140);
	NewChars[6].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2								 
	NewChars[7].Drawable->setPosition(1130, 140);
	NewChars[7].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2								 
	NewChars[8].Drawable->setPosition(1220, 140);
	NewChars[8].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 1
	NewChars[9].Drawable->setPosition(1040, 200);
	NewChars[9].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2
	NewChars[10].Drawable->setPosition(1130, 200);
	NewChars[10].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2
	NewChars[11].Drawable->setPosition(1220, 200);
	NewChars[11].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	return NewChars;
}

std::vector<Character> LevelFactory::SeekVsMouse(sf::RenderWindow* Window)
{
	std::vector<Character> NewChars;
	NewChars.push_back(Character(new Seek()));
	NewChars.push_back(Character(new MouseAttach(Window)));
	NewChars.push_back(Character(new Button(Window, new Loader(1))));
	NewChars.push_back(Character(new Button(Window, new Loader(2))));
	NewChars.push_back(Character(new Button(Window, new Loader(3))));
	NewChars.push_back(Character(new Button(Window, new Loader(4))));
	NewChars.push_back(Character(new Button(Window, new Loader(5))));
	NewChars.push_back(Character(new Button(Window, new Loader(6))));
	NewChars.push_back(Character(new Button(Window, new Loader(7))));
	NewChars.push_back(Character(new Button(Window, new Loader(8))));
	NewChars.push_back(Character(new Button(Window, new Loader(9))));
	NewChars[0].MyBehaviour->SetTarget(NewChars[1].Drawable);
	NewChars[0].Drawable->setPosition(500, 500);
	
	//button 1
	NewChars[2].Drawable->setPosition(1040, 80);
	NewChars[2].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2								
	NewChars[3].Drawable->setPosition(1130, 80);
	NewChars[3].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2								
	NewChars[4].Drawable->setPosition(1220, 80);
	NewChars[4].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 1
	NewChars[5].Drawable->setPosition(1040, 140);
	NewChars[5].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2								 
	NewChars[6].Drawable->setPosition(1130, 140);
	NewChars[6].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2								 
	NewChars[7].Drawable->setPosition(1220, 140);
	NewChars[7].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 1
	NewChars[8].Drawable->setPosition(1040, 200);
	NewChars[8].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2
	NewChars[9].Drawable->setPosition(1130, 200);
	NewChars[9].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2
	NewChars[10].Drawable->setPosition(1220, 200);
	NewChars[10].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	return NewChars;
}

std::vector<Character> LevelFactory::ArriveVsFlee(sf::RenderWindow* Window)
{
	std::vector<Character> NewChars;
	NewChars.push_back(Character(new Arrive()));
	NewChars.push_back(Character(new MouseAttach(Window)));
	NewChars.push_back(Character(new Flee()));
	NewChars.push_back(Character(new Button(Window, new Loader(1))));
	NewChars.push_back(Character(new Button(Window, new Loader(2))));
	NewChars.push_back(Character(new Button(Window, new Loader(3))));
	NewChars.push_back(Character(new Button(Window, new Loader(4))));
	NewChars.push_back(Character(new Button(Window, new Loader(5))));
	NewChars.push_back(Character(new Button(Window, new Loader(6))));
	NewChars.push_back(Character(new Button(Window, new Loader(7))));
	NewChars.push_back(Character(new Button(Window, new Loader(8))));
	NewChars.push_back(Character(new Button(Window, new Loader(9))));
	NewChars[0].MyBehaviour->SetTarget(NewChars[2].Drawable);
	NewChars[2].MyBehaviour->SetTarget(NewChars[0].Drawable);
	NewChars[0].Drawable->setPosition(500, 500);
	//button 1
	NewChars[3].Drawable->setPosition(1040, 80);
	NewChars[3].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2								
	NewChars[4].Drawable->setPosition(1130, 80);
	NewChars[4].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2								
	NewChars[5].Drawable->setPosition(1220, 80);
	NewChars[5].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 1
	NewChars[6].Drawable->setPosition(1040, 140);
	NewChars[6].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2								 
	NewChars[7].Drawable->setPosition(1130, 140);
	NewChars[7].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2								 
	NewChars[8].Drawable->setPosition(1220, 140);
	NewChars[8].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 1
	NewChars[9].Drawable->setPosition(1040, 200);
	NewChars[9].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2
	NewChars[10].Drawable->setPosition(1130, 200);
	NewChars[10].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2
	NewChars[11].Drawable->setPosition(1220, 200);
	NewChars[11].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	return NewChars;
}

std::vector<Character> LevelFactory::ArriveVsWander(sf::RenderWindow* Window)
{
	std::vector<Character> NewChars;
	NewChars.push_back(Character(new Arrive()));
	NewChars.push_back(Character(new MouseAttach(Window)));
	NewChars.push_back(Character(new Wander()));
	NewChars.push_back(Character(new Button(Window, new Loader(1))));
	NewChars.push_back(Character(new Button(Window, new Loader(2))));
	NewChars.push_back(Character(new Button(Window, new Loader(3))));
	NewChars.push_back(Character(new Button(Window, new Loader(4))));
	NewChars.push_back(Character(new Button(Window, new Loader(5))));
	NewChars.push_back(Character(new Button(Window, new Loader(6))));
	NewChars.push_back(Character(new Button(Window, new Loader(7))));
	NewChars.push_back(Character(new Button(Window, new Loader(8))));
	NewChars.push_back(Character(new Button(Window, new Loader(9))));
	NewChars[0].MyBehaviour->SetTarget(NewChars[2].Drawable);
	NewChars[0].Drawable->setPosition(500, 500);
	//button 1
	NewChars[3].Drawable->setPosition(1040, 80);
	NewChars[3].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2								
	NewChars[4].Drawable->setPosition(1130, 80);
	NewChars[4].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2								
	NewChars[5].Drawable->setPosition(1220, 80);
	NewChars[5].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 1
	NewChars[6].Drawable->setPosition(1040, 140);
	NewChars[6].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2								 
	NewChars[7].Drawable->setPosition(1130, 140);
	NewChars[7].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2								 
	NewChars[8].Drawable->setPosition(1220, 140);
	NewChars[8].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 1
	NewChars[9].Drawable->setPosition(1040, 200);
	NewChars[9].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2
	NewChars[10].Drawable->setPosition(1130, 200);
	NewChars[10].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2
	NewChars[11].Drawable->setPosition(1220, 200);
	NewChars[11].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	return NewChars;
}

std::vector<Character> LevelFactory::ArriveVsMouse(sf::RenderWindow* Window)
{
	std::vector<Character> NewChars;
	NewChars.push_back(Character(new Arrive()));
	NewChars.push_back(Character(new MouseAttach(Window)));
	NewChars.push_back(Character(new Button(Window, new Loader(1))));
	NewChars.push_back(Character(new Button(Window, new Loader(2))));
	NewChars.push_back(Character(new Button(Window, new Loader(3))));
	NewChars.push_back(Character(new Button(Window, new Loader(4))));
	NewChars.push_back(Character(new Button(Window, new Loader(5))));
	NewChars.push_back(Character(new Button(Window, new Loader(6))));
	NewChars.push_back(Character(new Button(Window, new Loader(7))));
	NewChars.push_back(Character(new Button(Window, new Loader(8))));
	NewChars.push_back(Character(new Button(Window, new Loader(9))));
	NewChars[0].MyBehaviour->SetTarget(NewChars[1].Drawable);
	NewChars[0].Drawable->setPosition(500, 500);
	//button 1
	NewChars[2].Drawable->setPosition(1040, 80);
	NewChars[2].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2								
	NewChars[3].Drawable->setPosition(1130, 80);
	NewChars[3].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2								
	NewChars[4].Drawable->setPosition(1220, 80);
	NewChars[4].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 1
	NewChars[5].Drawable->setPosition(1040, 140);
	NewChars[5].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2								 
	NewChars[6].Drawable->setPosition(1130, 140);
	NewChars[6].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2								 
	NewChars[7].Drawable->setPosition(1220, 140);
	NewChars[7].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 1
	NewChars[8].Drawable->setPosition(1040, 200);
	NewChars[8].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2
	NewChars[9].Drawable->setPosition(1130, 200);
	NewChars[9].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2
	NewChars[10].Drawable->setPosition(1220, 200);
	NewChars[10].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	return NewChars;
}

std::vector<Character> LevelFactory::PursuitVsFlee(sf::RenderWindow* Window)
{
	std::vector<Character> NewChars;
	NewChars.push_back(Character(new Pursuit()));
	NewChars.push_back(Character(new MouseAttach(Window)));
	NewChars.push_back(Character(new Flee()));
	NewChars.push_back(Character(new Button(Window, new Loader(1))));
	NewChars.push_back(Character(new Button(Window, new Loader(2))));
	NewChars.push_back(Character(new Button(Window, new Loader(3))));
	NewChars.push_back(Character(new Button(Window, new Loader(4))));
	NewChars.push_back(Character(new Button(Window, new Loader(5))));
	NewChars.push_back(Character(new Button(Window, new Loader(6))));
	NewChars.push_back(Character(new Button(Window, new Loader(7))));
	NewChars.push_back(Character(new Button(Window, new Loader(8))));
	NewChars.push_back(Character(new Button(Window, new Loader(9))));
	NewChars[0].MyBehaviour->SetTarget(NewChars[2].Drawable);
	static_cast<Pursuit*>(NewChars[0].MyBehaviour)->setTarVel(NewChars[2].MyBehaviour->getVel());
	static_cast<Pursuit*>(NewChars[0].MyBehaviour)->setTarSpeed(&static_cast<Flee*>(NewChars[2].MyBehaviour)->speed);
	NewChars[2].MyBehaviour->SetTarget(NewChars[0].Drawable);
	NewChars[0].Drawable->setPosition(500, 500);
	//button 1
	NewChars[3].Drawable->setPosition(1040, 80);
	NewChars[3].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2								
	NewChars[4].Drawable->setPosition(1130, 80);
	NewChars[4].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2								
	NewChars[5].Drawable->setPosition(1220, 80);
	NewChars[5].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 1
	NewChars[6].Drawable->setPosition(1040, 140);
	NewChars[6].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2								 
	NewChars[7].Drawable->setPosition(1130, 140);
	NewChars[7].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2								 
	NewChars[8].Drawable->setPosition(1220, 140);
	NewChars[8].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 1
	NewChars[9].Drawable->setPosition(1040, 200);
	NewChars[9].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2
	NewChars[10].Drawable->setPosition(1130, 200);
	NewChars[10].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2
	NewChars[11].Drawable->setPosition(1220, 200);
	NewChars[11].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	return NewChars;
}

std::vector<Character> LevelFactory::PursuitVsWander(sf::RenderWindow* Window)
{
	std::vector<Character> NewChars;
	NewChars.push_back(Character(new Pursuit()));
	NewChars.push_back(Character(new MouseAttach(Window)));
	NewChars.push_back(Character(new Wander()));
	NewChars.push_back(Character(new Button(Window, new Loader(1))));
	NewChars.push_back(Character(new Button(Window, new Loader(2))));
	NewChars.push_back(Character(new Button(Window, new Loader(3))));
	NewChars.push_back(Character(new Button(Window, new Loader(4))));
	NewChars.push_back(Character(new Button(Window, new Loader(5))));
	NewChars.push_back(Character(new Button(Window, new Loader(6))));
	NewChars.push_back(Character(new Button(Window, new Loader(7))));
	NewChars.push_back(Character(new Button(Window, new Loader(8))));
	NewChars.push_back(Character(new Button(Window, new Loader(9))));
	NewChars[0].MyBehaviour->SetTarget(NewChars[2].Drawable);
	static_cast<Pursuit*>(NewChars[0].MyBehaviour)->setTarVel(NewChars[2].MyBehaviour->getVel());
	static_cast<Pursuit*>(NewChars[0].MyBehaviour)->setTarSpeed(&static_cast<Flee*>(NewChars[2].MyBehaviour)->speed);
	NewChars[2].MyBehaviour->SetTarget(NewChars[0].Drawable);
	NewChars[0].Drawable->setPosition(500, 500);
	//button 1
	NewChars[3].Drawable->setPosition(1040, 80);
	NewChars[3].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2								
	NewChars[4].Drawable->setPosition(1130, 80);
	NewChars[4].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2								
	NewChars[5].Drawable->setPosition(1220, 80);
	NewChars[5].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 1
	NewChars[6].Drawable->setPosition(1040, 140);
	NewChars[6].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2								 
	NewChars[7].Drawable->setPosition(1130, 140);
	NewChars[7].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2								 
	NewChars[8].Drawable->setPosition(1220, 140);
	NewChars[8].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 1
	NewChars[9].Drawable->setPosition(1040, 200);
	NewChars[9].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2
	NewChars[10].Drawable->setPosition(1130, 200);
	NewChars[10].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2
	NewChars[11].Drawable->setPosition(1220, 200);
	NewChars[11].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	return NewChars;
}

std::vector<Character> LevelFactory::PursuitVsMouse(sf::RenderWindow* Window)
{
	std::vector<Character> NewChars;
	NewChars.push_back(Character(new Pursuit()));
	NewChars.push_back(Character(new MouseAttach(Window)));
	NewChars.push_back(Character(new Button(Window, new Loader(1))));
	NewChars.push_back(Character(new Button(Window, new Loader(2))));
	NewChars.push_back(Character(new Button(Window, new Loader(3))));
	NewChars.push_back(Character(new Button(Window, new Loader(4))));
	NewChars.push_back(Character(new Button(Window, new Loader(5))));
	NewChars.push_back(Character(new Button(Window, new Loader(6))));
	NewChars.push_back(Character(new Button(Window, new Loader(7))));
	NewChars.push_back(Character(new Button(Window, new Loader(8))));
	NewChars.push_back(Character(new Button(Window, new Loader(9))));
	NewChars[0].MyBehaviour->SetTarget(NewChars[1].Drawable);
	static_cast<Pursuit*>(NewChars[0].MyBehaviour)->setTarVel(NewChars[1].MyBehaviour->getVel());
	static_cast<Pursuit*>(NewChars[0].MyBehaviour)->setTarSpeed(&static_cast<Flee*>(NewChars[1].MyBehaviour)->speed);
	NewChars[2].MyBehaviour->SetTarget(NewChars[0].Drawable);
	NewChars[0].Drawable->setPosition(500, 500);
	//button 1
	NewChars[2].Drawable->setPosition(1040, 80);
	NewChars[2].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2								
	NewChars[3].Drawable->setPosition(1130, 80);
	NewChars[3].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2								
	NewChars[4].Drawable->setPosition(1220, 80);
	NewChars[4].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 1
	NewChars[5].Drawable->setPosition(1040, 140);
	NewChars[5].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2								 
	NewChars[6].Drawable->setPosition(1130, 140);
	NewChars[6].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2								 
	NewChars[7].Drawable->setPosition(1220, 140);
	NewChars[7].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 1
	NewChars[8].Drawable->setPosition(1040, 200);
	NewChars[8].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2
	NewChars[9].Drawable->setPosition(1130, 200);
	NewChars[9].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	//button 2
	NewChars[10].Drawable->setPosition(1220, 200);
	NewChars[10].Drawable->setScale((sf::Vector2f(1.6f, 1.0f)));
	return NewChars;
}
