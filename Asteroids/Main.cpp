#include "Player.h"
#include "Alien.h"

int main() {
	Player player(400, 0);
	Alien alien(400, 400, 4);

	sf::RenderWindow window(sf::VideoMode(800, 800), "Space Invaders");
	int counter = 0;

	while (window.isOpen()) {
		sf::Event event;
		if (counter == 15) {
			player.move();
			alien.update();
			counter = 0;
		}
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
		window.clear(sf::Color::Black);
		window.draw(alien);
		window.display();
		counter++;
	}

	return 0;
}