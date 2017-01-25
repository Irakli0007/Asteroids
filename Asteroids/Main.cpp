#include "Alien.h"

int main() {

	float fps = 120;
	sf::Time sleepTime(sf::seconds(1.f/fps));
	sf::Clock clock;

	Player player(400, 0);
	Alien alien1(500, 420, 3, &player);
	Alien alien2(450, 360, 4, &player);
	Alien alien3(550, 400, 5, &player);

	sf::RenderWindow window(sf::VideoMode(800, 800), "Space Invaders");
	int counter = 0;

	while (window.isOpen()) {
		clock.restart();

		sf::Event event;
		player.move();
		alien1.update();
		alien2.update();
		alien3.update();
		
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

		if (clock.getElapsedTime() < sleepTime)
			sf::sleep(sleepTime - clock.getElapsedTime());

		counter++;
	}

	return 0;
}