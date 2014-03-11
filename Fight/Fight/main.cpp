#include <SFML/Graphics.hpp>
#include "MainMenu.h"
using namespace sf;

int main()
{
    Texture backround;
    Sprite backround_S;
    if (!backround.loadFromFile("backround.png")){}
    backround_S.setTexture(backround);
    Texture start;
    Sprite start_S;
    if (!start.loadFromFile("start.png")){}
    start_S.setTexture(start);
    start_S.setPosition(1600,175);
    Texture options;
    Sprite options_S;
    if (!options.loadFromFile("options.png")){}
    options_S.setTexture(options);
    options_S.setPosition(1600,225);
    Texture exit;
    Sprite exit_S;
    if (!exit.loadFromFile("exit.png")){}
    exit_S.setTexture(exit);
    exit_S.setPosition(1600,275);
    bool INmainmenu = true;
    int timer = 0;
    RenderWindow window(VideoMode(1800, 900), "Fight");
    MainMenu MainMenu;
                window.draw(backround_S);
    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
                if (event.type == sf::Event::MouseButtonPressed)
                    {
                        if (event.mouseButton.button == sf::Mouse::Right)
                            {
                                INmainmenu = false;
                            }
                    }
            if (event.type == Event::Closed)
                window.close();
        }
        window.clear();
        if(INmainmenu == true)
        {
            window.draw(backround_S);
            window.draw(start_S);
            window.draw(options_S);
            window.draw(exit_S);
        }


        window.display();
    }
    return 0;
}
