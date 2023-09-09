//#include <SFML/Graphics.hpp>
//#include <iostream>
//
//int main() {
//
//    sf::RenderWindow window(
//        sf::VideoMode(640, 480),
//        "SFML works!",
//        sf::Style::Titlebar | sf::Style::Close
//        //| sf::Style::Fullscreen  // 설정들
//    );
//
//    window.setMouseCursorVisible(false);
//
//    // 콘솔 제거:
//    // linker -> system -> subsystem(console -> window)
//
//    bool isFullScreen = true;
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
//            case sf::Event::KeyReleased:
//                if (event.key.code == sf::Keyboard::Return) {   // enter
//                    if (isFullScreen) {
//                        window.create(
//                            sf::VideoMode(640, 480),
//                            "SFML works!",
//                            sf::Style::Default
//                        );
//                        isFullScreen = false;
//                    }
//                    else {
//                        window.create(
//                            sf::VideoMode(640, 480),
//                            "SFML works!",
//                            sf::Style::Fullscreen
//                        );
//                        isFullScreen = true;
//                    }
//                }
//
//            }
//        }
//
//        window.clear();
//
//        window.display();
//
//    }
//
//    return 0;
//}