#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

int main() {
	sf::RenderWindow window(sf::VideoMode(600, 600), "SFML Works");

	while (window.isOpen())
	{
		window.clear(sf::Color::Black);
		sf::RectangleShape rs(sf::Vector2f(100, 100));
		window.draw(rs);
		window.display();
	}
}