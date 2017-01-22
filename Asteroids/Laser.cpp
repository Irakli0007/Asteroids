#include "Laser.h"

Laser::Laser(float x, float y, float speed) :m_position(x, y), m_speed(speed) {
	m_sprite.setPosition(m_position);
	m_sprite.setSize(sf::Vector2f(10, 30));
}

void Laser::move() {
	m_position.y += m_speed;
	m_sprite.move(0, m_speed);
}

void Laser::update() {
	move();
}