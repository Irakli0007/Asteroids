#include <SFML\Graphics.hpp>

class Alien : public sf::Drawable {
	sf::Vector2f m_position;
	float m_speed;


public:
	//this draw overrides class sf::Drawable's draw function and allows "window.draw(Asteroid obj)" to draw to screen
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};