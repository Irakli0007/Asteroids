#include <SFML\Graphics.hpp>
#include <stdlib.h>
#include <time.h>
#include "LaserTypes.h"

class Alien : public sf::Drawable {
	sf::Vector2f m_position;
	float m_speed;
	sf::RectangleShape m_sprite;
	int m_numMoves = 0;
	int m_shootFreq = 5;
	int m_shotLifespan = 10;
	bool m_shotsFired = 0;

	Player * m_player = NULL;
	Laser * m_laser = NULL;

	void move();

	void shoot();

public:
	Alien(float x, float y, float speed);

	~Alien();

	void update();

	sf::Vector2f getPosition();
	//this draw overrides class sf::Drawable's draw function and allows "window.draw(Asteroid obj)" to draw to screen
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};