#include "LaserTypes.h"

AlienLaser::AlienLaser(float x, float y, float speed, Player* player):Laser(x, y, speed), m_player(player) {
	
}

bool AlienLaser::collision() {
	if (m_position == m_player->getPosition())
		return true;
	else
		return false;
}

void AlienLaser::draw(sf::RenderTarget& target, sf::RenderStates states) const {
	target.draw(m_sprite, states);
}

PlayerLaser::PlayerLaser(float x, float y, float speed) : Laser(x, y, -speed) {
	
}

bool PlayerLaser::collision() {
	for (int i = 0; i < m_aliens.size(); i++) {
		if (m_aliens[i]) {
			if (m_aliens[i]->getPosition() == m_position) {
				return true;
				//do collision stuff
			}
		}
	}
	return false;
}

void PlayerLaser::draw(sf::RenderTarget& target, sf::RenderStates states) const {
	target.draw(m_sprite, states);
}