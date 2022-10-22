#include <SFML/Graphics.hpp>
#include "Pollito.h"

int main()
{
    Pollito pepe(15);
    Pollito pio(90);
    Pollito chiken(100);
    Pollito plumadizimo(2.5);
    chiken.polliPio();

    sf::RenderWindow window(sf::VideoMode(350, 370), "SFML works!");
    sf::CircleShape cabecita(95.f);
    cabecita.setFillColor(sf::Color::Yellow);
    cabecita.setPosition(sf::Vector2f{ 55,10 });

    sf::CircleShape cuerpecito(120);
    cuerpecito.setFillColor(sf::Color::Yellow);
    cuerpecito.setPosition(sf::Vector2f{ 30,110 });

    sf::CircleShape plumita(20);
    plumita.setFillColor(sf::Color::Yellow);
    plumita.setPosition(sf::Vector2f{ 120,5 });

    sf::CircleShape plumita2(20);
    plumita2.setFillColor(sf::Color::Yellow);
    plumita2.setPosition(sf::Vector2f{ 140,0 });

    sf::CircleShape ojitoLeft(25.f);
    ojitoLeft.setFillColor(sf::Color::Black);
    ojitoLeft.setPosition(sf::Vector2f{ 95,75 });

    sf::CircleShape ojitoRight(25.f);
    ojitoRight.setFillColor(sf::Color::Black);
    ojitoRight.setPosition(sf::Vector2f{ 160,75 });

    sf::RectangleShape Piquito({ 50.f,50.f });
    Piquito.setFillColor(sf::Color::Red);
    Piquito.setPosition(sf::Vector2f{ 150,85 });
    Piquito.setRotation(45.f);

    sf::RectangleShape Rectangulo({ 100,40 });
    Rectangulo.setFillColor(sf::Color::Yellow);
    Rectangulo.setPosition(sf::Vector2f{ 100,70 });

    sf::RectangleShape patitaLeft({ 70, 25 });
    patitaLeft.setFillColor(sf::Color::Red);
    patitaLeft.setPosition(sf::Vector2f{ 50,330 });

    sf::RectangleShape patitaRight({ 70, 25 });
    patitaRight.setFillColor(sf::Color::Red);
    patitaRight.setPosition(sf::Vector2f{ 180,330 });
 

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(cabecita);
        window.draw(plumita);
        window.draw(plumita2);
        window.draw(patitaLeft);
        window.draw(patitaRight);
        window.draw(cuerpecito);
        window.draw(Piquito);
        window.draw(Rectangulo);
        window.draw(ojitoLeft);
        window.draw(ojitoRight);


        window.display();
    }

    return 0;
}
