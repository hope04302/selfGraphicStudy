//#include <SFML/Graphics.hpp>
//#include <iostream>
//
//int main() {
//
//    sf::RenderWindow window(sf::VideoMode(600, 600), "SFML works!");
//
//    // sprite 불러오기
//    sf::Texture texture;
//
//    // 만약 w, h가 크다면 -> rect를 마지막 픽셀로 크기만큼 채움
//    // true로 설정하면, 대신 repeat하는 걸로 함
//    texture.setRepeated(true);
//
//    if (!texture.loadFromFile("image/square.png")) {
//        std::cout << "Error loading paddle texture :(" << std::endl;
//    }
//
//    sf::Sprite sprite;
//    sprite.setTexture(texture);
//    // sf::Sprite sprite(texture);   // 로도 가능
//
//    // rect size(히트박스?) x, y, w, h
//    sprite.setTextureRect(sf::IntRect(0, 0, 200, 200));
//
//    // 색깔
//    //sprite.setColor(sf::Color(225, 225, 225, 255));
//
//    // 좌표: 왼쪽 위를 (0, 0)으로 정함
//    // 해당 sprite를 대표하는 'sprite 내의 위치'를 입력
//    // sprite.setOrigin(sf::Vector2f(10, 10));
//    sprite.setOrigin(sf::Vector2f(
//        sprite.getTexture()->getSize().x * 0.9f,
//        sprite.getTexture()->getSize().y * 0.9f
//    ));
//
//    // 이동하는 역할(양수는 위, 왼쪽으로)
//    sprite.setPosition(sf::Vector2f(100, 100));
//    std::cout << sprite.getPosition().x << std::endl;
//
//    // 이동(상대적)
//    sprite.move(sf::Vector2f(100, 100));
//
//    // 회전
//    sprite.setRotation(0);
//    sprite.rotate(20);    // 60분법, -> 방향
//
//    // 크기
//    sprite.setScale(sf::Vector2f(0.5, 4));
//    sprite.scale(sf::Vector2f(0.5, 0.5));
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
//        window.clear();
//
//        // 출력 방법
//        window.draw(sprite);
//
//        window.display();
//
//    }
//
//    return 0;
//}