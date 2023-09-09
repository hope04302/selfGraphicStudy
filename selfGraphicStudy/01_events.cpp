//#include <SFML/Graphics.hpp>
//#include <iostream>
//
//int main() {
//
//    // window ����
//    sf::RenderWindow window(sf::VideoMode(600, 600), "SFML works!");
//
//    // roop ����
//    while (window.isOpen()) {
//
//        sf::Event event;
//
//        // event�� �׾Ƶδ� queue�� ���𰡰� ���� ��...
//        while (window.pollEvent(event)) {   
//
//            switch (event.type) {
//
//            // ======================================
//            //          window ���� ����
//            // ======================================                
//
//            case sf::Event::Closed:     
//                window.close();
//                break;
//
//            case sf::Event::Resized:
//                std::cout << event.size.width << ":" << event.size.height << std::endl;
//                break;
//
//            case sf::Event::LostFocus:
//                std::cout << "Lost Focus" << std::endl;
//                break;
//
//            case sf::Event::GainedFocus:
//                std::cout << "Gained Focus" << std::endl;
//                break;
//
//            // ======================================
//            //          key, mouse ����
//            // ======================================
//
//            case sf::Event::KeyPressed:     
//                std::cout << "Key has been pressed" << std::endl;
//
//                switch (event.key.code) {
//                case sf::Keyboard::A:
//                    std::cout << "A" << std::endl;
//                    break;
//                }
//
//                break;
//
//            case sf::Event::KeyReleased:       
//                std::cout << "Key has been released" << std::endl;
//
//                switch (event.key.code) {
//                case sf::Keyboard::J:
//                    std::cout << "J" << std::endl;
//                    break;
//                }
//
//                break;
//
//            case sf::Event::MouseButtonPressed:
//                std::cout << "Mouse button has been pressed" << std::endl;
//
//                switch (event.key.code) {
//                case sf::Mouse::Left:
//                    std::cout << "LEFT KEY" << std::endl;
//                }
//
//                break;
//
//            case sf::Event::MouseButtonReleased:
//                std::cout << "Mouse button has been released" << std::endl;
//
//                switch (event.key.code) {
//                case sf::Mouse::Right:
//                    std::cout << "RIGHT KEY" << std::endl;
//                    break;
//                }
//
//                break;
//
//            case sf::Event::MouseWheelMoved:
//                std::cout << "Mouse wheel has been scrolled" << std::endl;
//                std::cout << event.mouseWheel.delta << std::endl;
//                break;
//
//            case sf::Event::MouseMoved:
//                std::cout << "Mouse has been moved" << std::endl;
//                std::cout << event.mouseMove.y << std::endl;
//                break;
//
//            case sf::Event::MouseEntered:   // ȭ�鿡 ���� ��
//                std::cout << "Mouse has entered the window" << std::endl;
//                break;
//
//            case sf::Event::MouseLeft:      // ȭ�鿡�� ���� ��
//                std::cout << "Mouse has left the window" << std::endl;
//                break;
//
//            // ���̽�ƽ ����: ����
//
//            // ======================================
//            //          text ����
//            // ======================================
//
//            case sf::Event::TextEntered:
//                std::cout << "Text has been entered" << std::endl;
//
//                if (event.text.unicode == 65) {
//                    std::cout << "Capital A has been clicked" << std::endl;
//                }
//
//                break;
//            }
//        }
//
//        window.clear();
//
//        // ���⿡ ������ �� �ۼ�
//
//        window.display();
//
//    }
//
//    return 0;
//}