#include "Alien.h"

Alien::Alien(float x, float y, float speed): m_position(x, y), m_speed(speed) {
	m_sprite.setPosition(m_position);
	m_sprite.setSize(sf::Vector2f(60.f, 30.f));
};

Alien::~Alien() {
	//delete any Laser/laser objects
}

void Alien::move() {
	if (m_numMoves % 40 == 0) {
		m_position.y += 10;
		m_sprite.move(0, 10);
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
	m_laser = new AlienLaser(m_position.x, m_position.y, 10, m_player);
	m_shotLifespan = 10;
}

void Alien::update() {
	move();

	if (m_laser) {
		if (m_shotLifespan > 0)
			m_shotLifespan--;
		else {
			delete m_laser;
			m_laser = NULL;
		}
	}

	if (!m_laser && rand() % 10 < m_shootFreq)
		shoot();
}

sf::Vector2f Alien::getPosition() {
	return m_position;
}

void Alien::draw(sf::RenderTarget& target, sf::RenderStates states) const {
	target.draw(m_sprite, states);
	if (m_laser)
		target.draw(*m_laser, states);
}