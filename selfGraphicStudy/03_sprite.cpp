//#include <SFML/Graphics.hpp>
//#include <iostream>
//
//int main() {
//
//    sf::RenderWindow window(sf::VideoMode(600, 600), "SFML works!");
//
//    // sprite �ҷ�����
//    sf::Texture texture;
//
//    // ���� w, h�� ũ�ٸ� -> rect�� ������ �ȼ��� ũ�⸸ŭ ä��
//    // true�� �����ϸ�, ��� repeat�ϴ� �ɷ� ��
//    texture.setRepeated(true);
//
//    if (!texture.loadFromFile("image/square.png")) {
//        std::cout << "Error loading paddle texture :(" << std::endl;
//    }
//
//    sf::Sprite sprite;
//    sprite.setTexture(texture);
//    // sf::Sprite sprite(texture);   // �ε� ����
//
//    // rect size(��Ʈ�ڽ�?) x, y, w, h
//    sprite.setTextureRect(sf::IntRect(0, 0, 200, 200));
//
//    // ����
//    //sprite.setColor(sf::Color(225, 225, 225, 255));
//
//    // ��ǥ: ���� ���� (0, 0)���� ����
//    // �ش� sprite�� ��ǥ�ϴ� 'sprite ���� ��ġ'�� �Է�
//    // sprite.setOrigin(sf::Vector2f(10, 10));
//    sprite.setOrigin(sf::Vector2f(
//        sprite.getTexture()->getSize().x * 0.9f,
//        sprite.getTexture()->getSize().y * 0.9f
//    ));
//
//    // �̵��ϴ� ����(����� ��, ��������)
//    sprite.setPosition(sf::Vector2f(100, 100));
//    std::cout << sprite.getPosition().x << std::endl;
//
//    // �̵�(�����)
//    sprite.move(sf::Vector2f(100, 100));
//
//    // ȸ��
//    sprite.setRotation(0);
//    sprite.rotate(20);    // 60�й�, -> ����
//
//    // ũ��
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
//        // ��� ���
//        window.draw(sprite);
//
//        window.display();
//
//    }
//
//    return 0;
//}