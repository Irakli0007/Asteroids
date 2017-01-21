#include "Player.h"

int main() {
	Player player(400, 0);

	sf::RenderWindow window(sf::VideoMode(800, 800), "Space Invaders");
	int counter = 0;

	while (window.isOpen()) {
		sf::Event event;
		if (counter == 15) {
			player.move();
			counter = 0;
		}
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
		window.clear(sf::Color::Black);
		window.draw(player);
		window.display();
		counter++;
	}

	return 0;
}