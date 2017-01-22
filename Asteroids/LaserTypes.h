#pragma once
#include "Laser.h"

class Player;
class Alien;

class AlienLaser : public Laser {
	Player* m_player = NULL;

public:
	AlienLaser(float x, float y, float speed, Player* player);

	bool collision();

	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

class PlayerLaser : public Laser {
	std::vector<Alien*> m_aliens;

public:
	PlayerLaser(float, float, float);

	bool collision();

	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};