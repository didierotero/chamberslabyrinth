#include "Levels.h"

Levels::Levels()
{
	// Load background texture and assign to rectangle shape
	bgTexture.loadFromFile("../assets/sprites/background.png"); 
	groundTexture.loadFromFile("../assets/sprites/ground.png");
	bgRect.setSize(sf::Vector2f(2560, 1440));
	bgRect.setTexture(&bgTexture);
	groundRect.setSize(sf::Vector2f(2560, 32));
	groundRect.setTexture(&groundTexture);
	groundRect.setPosition(0, 1340);

	// Create a platform
	platform.setSize(sf::Vector2f(350.f, 50.f));
	platform.setPosition(sf::Vector2f(700.f, 1000.f));
}

void Levels::update()
{
	// nothing yet
}

void Levels::render(sf::RenderWindow &window)
{
	window.draw(bgRect);
	window.draw(groundRect);

	platform.render(window);
}
