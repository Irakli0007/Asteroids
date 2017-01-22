#include "Alien.h"

int main() {
	Player player(400, 0);
	Alien alien1(500, 400, 4, &player);
	Alien alien2(450, 400, 4, &player);
	Alien alien3(550, 400, 4, &player);

	sf::RenderWindow window(sf::VideoMode(800, 800), "Space Invaders");
	int counter = 0;

	while (window.isOpen()) {
		sf::Event event;
		if (counter == 15) {
			player.move();
			alien1.update();
			alien2.update();
			alien3.update();
			counter = 0;
		}
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
		window.clear(sf::Color::Black);
		window.draw(alien1);
		window.draw(alien2);
		window.draw(alien3);
		window.draw(player);
		window.display();
		counter++;
	}

	return 0;
}