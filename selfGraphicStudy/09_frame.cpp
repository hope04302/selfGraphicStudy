//#include <SFML/Graphics.hpp>
//#include <iostream>
//
//int main() {
//
//    sf::RenderWindow window(sf::VideoMode(640, 480), "SFML works!");
//
//    sf::Sprite sprite;
//    sf::Texture texture;
//    if (!texture.loadFromFile("image/zooto.jpg")) {
//        std::cout << "Error" << std::endl;
//    }
//    sprite.setTexture(texture);
//
//    sf::Clock clock;
//    window.setFramerateLimit(15);
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
//        sf::Time time = clock.getElapsedTime();
//        // std::cout << time.asSeconds() << std::endl;
//
//        // 이렇게 해야 프레임 무관 동일하게 동작
//        sprite.move(sf::Vector2f(0, 0.1 * time.asMilliseconds()));
//
//        clock.restart().asMilliseconds();
//
//        window.clear();
//
//        window.draw(sprite);
//
//        window.display();
//
//    }
//
//    return 0;
//}