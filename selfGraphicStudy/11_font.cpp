//#include <SFML/Graphics.hpp>
//#include <iostream>
//
//int main() {
//
//    sf::RenderWindow window(sf::VideoMode(640, 480), "SFML works!");
//
//    sf::Font font;
//    if (!font.loadFromFile("font/NanumGothic.otf")) {
//        std::cout << "Error" << std::endl;
//    }
//
//    sf::Text text;
//    text.setFont(font);
//    text.setString("BATMAN");
//    text.setFillColor(sf::Color::Red);
//    text.setOutlineColor(sf::Color::Blue);  // setColor: deprecated
//    text.setCharacterSize(40);
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
//        window.clear();
//
//        window.draw(text);
//
//        window.display();
//
//    }
//
//    return 0;
//}