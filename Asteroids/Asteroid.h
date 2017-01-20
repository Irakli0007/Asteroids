#include <SFML\Graphics.hpp>

class Asteroid : public sf::Drawable {


public:
	//this draw overrides class sf::Drawable's draw function and allows "window.draw(Asteroid obj)" to draw to screen
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};