//#include <SFML/Graphics.hpp>
//#include <iostream>
//
//int main() {
//
//    sf::RenderWindow window(sf::VideoMode(600, 600), "SFML works!");
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
//            }
//        }
//
//        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
//            std::cout << "Jump Player" << std::endl;
//        }
//
//        if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
//            std::cout << "Left mouse" << std::endl;
//
//            std::cout << sf::Mouse::getPosition().x << std::endl;
//            std::cout << sf::Mouse::getPosition(window).x << std::endl;     // window를 기준으로
//        }
//
//        // 조이스틱은 생략
//
//        window.clear();
//
//        // ....
//
//        window.display();
//
//    }
//
//    return 0;
//}