//hpp includes
#include <SFML/Graphics.hpp>

//class includes
#include"Externs.h"

GameManager* Game = nullptr;

int main()
{
	srand(time(NULL));
	//creates our window 
	sf::RenderWindow window(sf::VideoMode(1280, 720, 32), "Jacob Sullvan AI Behaviours");

	Game = new GameManager(&window);

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
		Game->Update();

		//draws the objects
		Game->Draw();

		//Displays the double buffered frame
		window.display();

		std::cout << "S" << S << std::endl;
		std::cout << "s" << s << std::endl;
		std::cout << "A" << A << std::endl;
		std::cout << "a" << a << std::endl;
		std::cout << "C" << C << std::endl;
		std::cout << "c" << c << std::endl << std::endl;
	}
	return 0;
}