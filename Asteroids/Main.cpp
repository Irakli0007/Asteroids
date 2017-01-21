#include "Player.h"

int main() {
	Player player(400, 0);

	sf::RenderWindow window(sf::VideoMode(800, 800), "Space Invaders");

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::KeyPressed) {
				player.move(event);
			}
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
		window.clear(sf::Color::Black);
		window.draw(player);
		window.display();
	}

	return 0;
}