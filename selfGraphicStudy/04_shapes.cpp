//#include <SFML/Graphics.hpp>
//#include <iostream>
//
//int main() {
//
//    sf::RenderWindow window(sf::VideoMode(600, 600), "SFML works!");
//
//    // 도형 제작
//
//    sf::RectangleShape rectangle(sf::Vector2f(200, 40));
//    rectangle.setSize(sf::Vector2f(400, 67));
//
//    sf::CircleShape circle(150);    // radius
//    circle.setRadius(200);
//
//    sf::CircleShape polygon(300, 6);    // radius, count
//    polygon.setPointCount(10);
//
//    sf::ConvexShape shape(6);
//    shape.setPoint(0, sf::Vector2f(40, 70));
//    shape.setPoint(1, sf::Vector2f(60, 70));
//    shape.setPoint(2, sf::Vector2f(200, 200));
//    shape.setPoint(3, sf::Vector2f(350, 450));
//    shape.setPoint(4, sf::Vector2f(320, 500));
//    shape.setPoint(5, sf::Vector2f(320, 500));
//
//    sf::RectangleShape line1(sf::Vector2f(200, 3));
//    sf::Vertex line2[] = {
//        sf::Vertex(sf::Vector2f(25, 10)),
//        sf::Vertex(sf::Vector2f(400, 100))
//    };
//
//    circle.setFillColor(sf::Color::Cyan);
//    circle.setFillColor(sf::Color(255, 155, 155));
//    circle.setOutlineColor(sf::Color::Blue);
//    circle.setOutlineThickness(-10);
//
//    sf::Texture texture;
//    if (!texture.loadFromFile("image/square.png")) {
//        std::cout << "ERROR" << std::endl;
//    }
//    circle.setTexture(&texture);
//    circle.setTextureRect(sf::IntRect(0, 0, 45, 100));
//
//    // end
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
//        //window.draw(rectangle);
//        window.draw(circle);
//        //window.draw(polygon);
//        //window.draw(shape);
//        //window.draw(line1);
//        //window.draw(line2, 2, sf::Lines);
//
//        window.display();
//
//    }
//
//    return 0;
//}