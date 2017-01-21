#include "Player.h"

Player::Player(float x, float speed): m_position(x, 700), m_speed(speed) {
	m_sprite.setPosition(m_position);
	m_sprite.setRadius(20.f);
}

void Player::move() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
		m_sprite.move({ 1, 0 });
		m_position.x += 1;
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
		m_sprite.move({ -1, 0 });
		m_position.x -= 1;
	}

}


void Player::draw(sf::RenderTarget& target, sf::RenderStates states) const {
	target.draw(m_sprite, states);
}
