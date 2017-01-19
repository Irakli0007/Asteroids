#pragma once
#ifndef ASTEROID_H
#define ASTEROID_H

#include <SFML\Graphics.hpp>

class Asteroid : public sf::Drawable {


public:
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

#endif // !ASTEROID_H
