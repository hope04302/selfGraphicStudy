#pragma once
#include <SFML/Graphics.hpp>

#define MAX_NUMBER_OF_ITEMS 3

class Menu {

public:
	Menu(float width, float height) {

		if(!font.loadFromFile("font/Nanumgothic.otf")) {}

		menu[0].setFont(font);
		menu[0].setFillColor(sf::Color::Red);
		menu[0].setString("Play");
		menu[0].setPosition(sf::Vector2f(width / 2, height / (MAX_NUMBER_OF_ITEMS + 1) * 1));

		menu[1].setFont(font);
		menu[1].setFillColor(sf::Color::White);
		menu[1].setString("Options");
		menu[1].setPosition(sf::Vector2f(width / 2, height / (MAX_NUMBER_OF_ITEMS + 1) * 2));

		menu[2].setFont(font);
		menu[2].setFillColor(sf::Color::White);
		menu[2].setString("Exit");
		menu[2].setPosition(sf::Vector2f(width / 2, height / (MAX_NUMBER_OF_ITEMS + 1) * 3));

		selectedItemIndex = 0;
	}

	~Menu() {}

	void draw(sf::RenderWindow& window) {
		for (int i = 0; i < MAX_NUMBER_OF_ITEMS; i++) window.draw(menu[i]);
	}

	void MoveUp() {
		if (selectedItemIndex - 1 >= 0) {
			menu[selectedItemIndex].setFillColor(sf::Color::White);
			selectedItemIndex -= 1;
			menu[selectedItemIndex].setFillColor(sf::Color::Red);
		}
	}
	void MoveDown() {
		if (selectedItemIndex + 1 <= 2) {
			menu[selectedItemIndex].setFillColor(sf::Color::White);
			selectedItemIndex += 1;
			menu[selectedItemIndex].setFillColor(sf::Color::Red);
		}
	}

	const char *NowIndex() {
		switch (selectedItemIndex) {
		case 0:
			return "Play";
		case 1:
			return "Options";
		case 2:
			return "Exit";
		}
	}

private:

	int selectedItemIndex;
	sf::Font font;
	sf::Text menu[MAX_NUMBER_OF_ITEMS];

};