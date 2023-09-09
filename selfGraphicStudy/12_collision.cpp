//#include <SFML/Graphics.hpp>
//#include <iostream>
//
//int main() {
//
//    sf::RenderWindow window(sf::VideoMode(640, 480), "SFML works!");
//    
//    sf::Texture texture;
//
//    if (!texture.loadFromFile("image/ball.jpg")) {
//        std::cout << "LoadFromFile Error" << std::endl;
//        return -1;
//    }
//
//    sf::Sprite sprite1(texture);
//    sf::Sprite sprite2(texture);
//    sprite2.setPosition(sf::Vector2f(0, 300));
//
//    while (window.isOpen()) {
//
//        sf::Event event;
//
//        while (window.pollEvent(event)) {
//
//            switch (event.type) {
//
//            case sf::Event::Closed:
//                window.close();
//                break;
//
//            }
//        }
//
//        if (sprite1.getGlobalBounds().intersects(sprite2.getGlobalBounds())) {
//            std::cout << "Collided" << std::endl;
//        }
//        else {
//            sprite2.move(sf::Vector2f(0, -0.01f));
//        }
//
//        window.clear();
//
//        window.draw(sprite1);
//        window.draw(sprite2);
//
//        window.display();
//
//    }
//
//    return 0;
//}