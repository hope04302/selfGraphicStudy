//#include <SFML/Graphics.hpp>
//#include <iostream>
//
//int main() {
//
//    sf::RenderWindow window(sf::VideoMode(600, 600), "SFML works!");
//
//    sf::Texture texture;
//    if (!texture.loadFromFile("image/square.png")) {
//        std::cout << "Error" << std::endl;
//    }
//
//    // start
//
//    sf::Vertex point;
//    point.position = sf::Vector2f(300, 300);
//    point.color = sf::Color::Red;
//
//    sf::VertexArray line(sf::Lines, 2);
//    line[0].position = sf::Vector2f(200, 150);
//    line[0].color = sf::Color::Red;
//    line[1].position = sf::Vector2f(400, 350);
//    line[1].color = sf::Color::Green;
//    //line[1] = point;
//
//    sf::VertexArray triangle(sf::Triangles, 3); // quads. ...
//    triangle[0].position = sf::Vector2f(20, 50);
//    triangle[0].color = sf::Color::Red;
//    triangle[1].position = sf::Vector2f(200, 400);
//    triangle[1].color = sf::Color::Green;
//    triangle[2].position = sf::Vector2f(20, 250);
//    triangle[2].color = sf::Color::Blue;
//
//    sf::VertexArray lines(sf::LinesStrip, 3);
//    lines[0].position = sf::Vector2f(50, 40);
//    lines[0].color = sf::Color::Red;
//    lines[1].position = sf::Vector2f(150, 140);
//    lines[1].color = sf::Color::Blue;
//    lines[2].position = sf::Vector2f(50, 140);
//    lines[2].color = sf::Color::Yellow;
//
//    sf::VertexArray triangles(sf::TrianglesStrip, 4);
//    triangles[0].position = sf::Vector2f(50, 40);
//    triangles[0].color = sf::Color::Red;
//    triangles[1].position = sf::Vector2f(150, 40);
//    triangles[1].color = sf::Color::Green;
//    triangles[2].position = sf::Vector2f(250, 140);
//    triangles[2].color = sf::Color::Blue;   // 0, 1, 2·Î ¸¸µë
//    triangles[3].position = sf::Vector2f(50, 240);
//    triangles[3].color = sf::Color::Magenta;    // 1, 2, 3À¸·Î ¸¸µë
//    
//    sf::VertexArray quads(sf::Quads, 4);
//    quads[0].position = sf::Vector2f(0, 0);
//    quads[1].position = sf::Vector2f(100, 0);
//    quads[2].position = sf::Vector2f(100, 100);
//    quads[3].position = sf::Vector2f(0, 100);
//    quads[0].texCoords = sf::Vector2f(0, 0);
//    quads[1].texCoords = sf::Vector2f(50, 0);
//    quads[2].texCoords = sf::Vector2f(50, 50);
//    quads[3].texCoords = sf::Vector2f(0, 50);
//
//    sf::Transform transform;
//    transform.rotate(10, sf::Vector2f(100, 100));
//
//    sf::RenderStates states;
//    states.transform = transform;
//    states.texture = &texture;
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
//        //window.draw(line);
//        //window.draw(triangle);
//        //window.draw(lines);
//        //window.draw(triangles);
//        //window.draw(quads, &texture);
//        //window.draw(quads, transform);
//        window.draw(quads, states);
//
//        window.display();
//
//    }
//
//    return 0;
//}