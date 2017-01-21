#include "Alien.h"

Alien::Alien(float x, float y, float speed): m_position(x, y), m_speed(speed) {
	m_sprite.setPosition(m_position);
	m_sprite.setSize(sf::Vector2f(60.f, 30.f));
};

Alien::~Alien() {
	//delete any Laser/laser objects
}

void Alien::move() {
	if (m_numMoves % 5 == 0) {
		m_position.y -= 10;
		m_sprite.move(0, -10);
		m_speed *= -1;
		m_numMoves++;
	}
	else {
		m_position.x += m_speed;
		m_sprite.move(m_speed, 0);
		m_numMoves++;
	}
}

void Alien::shoot() {
	if (rand() % 10 < m_shootFreq) {
		//create a laser/Laser object
	}
}

void Alien::update() {
	move();
	shoot();
}

void Alien::draw(sf::RenderTarget& target, sf::RenderStates states) const {
	target.draw(m_sprite, states);
}