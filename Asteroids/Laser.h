#pragma once
#include <SFML\Graphics.hpp>
#include "Player.h"
#include "Alien.h"

class Laser : public sf::Drawable {
protected:
	sf::Vector2f m_position;
	float m_speed;
	sf::RectangleShape m_sprite;

	virtual bool collision() = 0;

	void move();
public:
	Laser(float x, float y, float speed);

	void update();

	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const = 0;
};