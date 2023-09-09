#pragma once
#include <SFML/Graphics.hpp>

class Player {
	
public:

	Player() {
		if (!playerTexture.loadFromFile("image/person.jpg")) {
			
		}
		playerSprite.setTexture(playerTexture);
	}

	~Player() {}

	void update(float dt) {
		playerSprite.move(sf::Vector2f(0, 0.01f));
	}

	void draw(sf::RenderWindow& window) {
		window.draw(playerSprite);
	}

private:

	sf::Sprite playerSprite;
	sf::Texture playerTexture;

};