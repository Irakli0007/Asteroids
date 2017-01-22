#pragma once
#include <SFML\Graphics.hpp>

class Laser : public sf::Drawable {
protected:
	sf::Vector2f m_position;
	float m_speed;
	sf::RectangleShape m_sprite;

	void move();
public:
	Laser(float x, float y, float speed);

	virtual bool collision() = 0;

	void update();

	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const = 0;
};