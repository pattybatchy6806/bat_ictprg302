//
// Created by Student on 12/7/2023.
//

#include <iostream>

#include <SFML/Window.hpp>
#include "sprite.hpp"

int main()
{
    sf::Window window;

   window.create(sf::VideoMode(800, 600), "My window");

    sf::Event event;

   while (window.isOpen())
   {
       if(event.type == sf::Event::Closed)
           window.close();
   }



    return 0;
}
