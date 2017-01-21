#include "Player.h"

Player::Player(float x, float speed): m_position(x, 700), m_speed(speed) {
	m_sprite.setPosition(m_position);
	m_sprite.setRadius(20.f);
}

void Player::move(sf::Event event) {
	if (event.type == sf::Event::KeyPressed) {
		if (event.key.code == sf::Keyboard::D) {
			m_speed += 5;
		}
		if (event.key.code == sf::Keyboard::A) {
			m_speed -= 5;
		}
	}

	if (event.type == sf::Event::KeyReleased) {
		if (event.key.code == sf::Keyboard::D) {
			m_speed -= 5;
		}
		if (event.key.code == sf::Keyboard::A) {
			m_speed += 5;
		}
	}
	movePlayer(m_speed);
}

void Player::movePlayer(float m_speed) {
	m_position.x += m_speed;
	m_sprite.setPosition(m_position);

}

void Player::draw(sf::RenderTarget& target, sf::RenderStates states) const {
	target.draw(m_sprite, states);
}
