//#include <SFML/Graphics.hpp>
//#include <iostream>
//
//int main() {
//
//    sf::RenderWindow window(sf::VideoMode(600, 600), "SFML works!");
//
//    sf::View view(sf::FloatRect(0, 0, 300, 300));
//    window.setView(view);
//
//    sf::Sprite background;
//    sf::Texture texture;
//    if (!texture.loadFromFile("image/zooto.jpg")) {
//        std::cout << "Error" << std::endl;
//    }
//    background.setTexture(texture);
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
//            case sf::Event::Resized:
//                sf::FloatRect visibleArea(0, 0, event.size.width, event.size.height);
//                window.setView(sf::View(visibleArea));
//                break;
//            }
//        }
//
//        window.clear();
//
//        window.draw(background);
//
//        //view.move(sf::Vector2f(0.01f, 0.01f));
//        //view.setCenter(sf::Vector2f(100, 100));
//        //view.rotate(0.01f);
//        //view.setRotation(10);   
//        //view.zoom(0.99999f);
//        //view.setSize(sf::Vector2f(400, 400));
//        //window.setView(view);   // 꼭 실행해야 변경이 반영
//
//        window.display();
//
//    }
//
//    return 0;
//}