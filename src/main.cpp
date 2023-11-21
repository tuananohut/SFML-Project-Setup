#include "Shape.h"

int main()
{
	sf::ContextSettings settings;
	settings.antialiasingLevel = 10;
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Setup", sf::Style::Default, settings);
	window.setFramerateLimit(60);

	Shape pentagon(400, 300, 1000, 100.0f);

	while(window.isOpen())
	{
		sf::Event event;
		while(window.pollEvent(event))
		{
			if(event.type == sf::Event::Closed)
			{
				window.close();
			}

		}
		
		window.clear(sf::Color::Black);

		window.draw(*pentagon.m_shape);
	
		window.display();
	}
	
	return 0;
}