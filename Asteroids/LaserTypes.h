#pragma once
#include "Laser.h"

class AlienLaser : public Laser {
	Player* m_player = NULL;

	bool collision();
public:
	AlienLaser(float x, float y, float speed, Player* player);

	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

class PlayerLaser : public Laser {
	std::vector<Alien*> m_aliens;

	bool collision();
public:
	PlayerLaser(float, float, float);

	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};