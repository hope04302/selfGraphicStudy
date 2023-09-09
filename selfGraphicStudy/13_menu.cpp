#include <SFML/Graphics.hpp>
#include <iostream>

#include "Menu.h"

int main() {

    sf::RenderWindow window(sf::VideoMode(640, 480), "SFML works!");

    Menu menu(window.getSize().x, window.getSize().y);

    while (window.isOpen()) {

        sf::Event event;

        while (window.pollEvent(event)) {

            switch (event.type) {

            case sf::Event::Closed:
                window.close();
                break;

            case sf::Event::KeyReleased:

                switch (event.key.code) {
                case sf::Keyboard::Up:
                    menu.MoveUp();
                    break;
                case sf::Keyboard::Down:
                    menu.MoveDown();
                    break;
                case sf::Keyboard::Return:
                    std::cout << menu.NowIndex() << " has been pressed" << std::endl;
                }

            }
        }

        window.clear();

        menu.draw(window);

        window.display();

    }

    return 0;
}