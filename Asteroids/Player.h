#include <SFML\Graphics.hpp>


class Player : public sf::Drawable {
	sf::Vector2f m_position;
	float m_speed;
	sf::CircleShape m_sprite;

public: 
	Player(float x, float speed);

	void draw(sf::RenderTarget& target, sf::RenderStates states) const;

	void move();




};