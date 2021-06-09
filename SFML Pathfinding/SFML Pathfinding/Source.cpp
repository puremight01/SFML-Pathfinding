//hpp includes
#include <SFML/Graphics.hpp>

//class includes
#include"GameManager.h"

int main()
{
	//creates our window 
	sf::RenderWindow window(sf::VideoMode(800, 600, 32), "Jacob Sullvan AI Behaviours");

	GameManager Game = GameManager();

	// run the program as long as the window is open
	while (window.isOpen())
	{
		// check all the window's events that were triggered since the last iteration of the loop
		sf::Event event;
		while (window.pollEvent(event))
		{
			// "close requested" event: we close the window
			if (event.type == sf::Event::Closed)
				window.close();
		}
		
		//Clears he double buffered frame
		window.clear();

		//updates the objects
		Game.Update();

		//draws the objects
		Game.Draw(&window);

		//Displays the double buffered frame
		window.display();

	}

	return 0;
}