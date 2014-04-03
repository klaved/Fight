#include <SFML/Graphics.hpp>
#include "MainMenu.h"
#include <string>
using namespace sf;

class Menu
{
    public:
        Texture backround;
        Sprite backround_S;
        Texture start;
        Sprite start_S;
        Texture options;
        Sprite options_S;
        Texture exit;
        Sprite exit_S;
        Menu();
};
Menu::Menu()
{
    if (!backround.loadFromFile("backround.png")){}
    backround_S.setTexture(backround);
    if (!start.loadFromFile("start.png")){}
    start_S.setTexture(start);
    start_S.setPosition(1600,175);
    if (!options.loadFromFile("options.png")){}
    options_S.setTexture(options);
    options_S.setPosition(1600,225);
    if (!exit.loadFromFile("exit.png")){}
    exit_S.setTexture(exit);
    exit_S.setPosition(1600,275);
}
class Charselect
{
public:
        Texture firetabRed;
        Sprite firetabRed_S;
        Texture watertabRed;
        Sprite watertabRed_S;
        Texture windtabRed;
        Sprite windtabRed_S;
        Texture earthtabRed;
        Sprite earthtabRed_S;
        Texture firetabBlue;
        Sprite firetabBlue_S;
        Texture watertabBlue;
        Sprite watertabBlue_S;
        Texture windtabBlue;
        Sprite windtabBlue_S;
        Texture earthtabBlue;
        Sprite earthtabBlue_S;
        Texture Charselect_backround;
        Sprite Charselect_backround_S;
        Charselect();
};
Charselect::Charselect()
{
    if (!firetabRed.loadFromFile("Fire tab Red.png")){}
    firetabRed_S.setTexture(firetabRed);
    if (!watertabRed.loadFromFile("Water tab Red.png")){}
    watertabRed_S.setTexture(watertabRed);
    if (!windtabRed.loadFromFile("Wind tab Red.png")){}
    windtabRed_S.setTexture(windtabRed);
    if (!earthtabRed.loadFromFile("Earth tab Red.png")){}
    earthtabRed_S.setTexture(earthtabRed);
    if (!firetabBlue.loadFromFile("Fire tab Blue.png")){}
    firetabBlue_S.setTexture(firetabBlue);
    if (!watertabBlue.loadFromFile("Water tab Blue.png")){}
    watertabBlue_S.setTexture(watertabBlue);
    if (!windtabBlue.loadFromFile("Wind tab Blue.png")){}
    windtabBlue_S.setTexture(windtabBlue);
    if (!earthtabBlue.loadFromFile("Earth tab Blue.png")){}
    earthtabBlue_S.setTexture(earthtabBlue);
    if (!Charselect_backround.loadFromFile("Char select2.png")){}
    Charselect_backround_S.setTexture(Charselect_backround);

}
int main()
{
    bool INmainmenu = true;
    bool INcharselect = false;
    int timer = 0;
    RenderWindow window(VideoMode(1800, 900), "Fight");
    Menu myMenu;
    Charselect myCharselect;
    window.draw(myMenu.backround_S);
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
                                INcharselect = true;
                            }
                    }
            if (event.type == Event::Closed)
                window.close();
        }
        window.clear();
        if(INmainmenu == true)
        {
            window.draw(myMenu.backround_S);
            window.draw(myMenu.start_S);
            window.draw(myMenu.options_S);
            window.draw(myMenu.exit_S);
        }
        else if(INcharselect = true)
        {
            window.draw(myCharselect.Charselect_backround_S);
            myCharselect.firetabRed_S.setPosition(0,384);
            myCharselect.watertabRed_S.setPosition(110,384);
            myCharselect.windtabRed_S.setPosition(220,384);
            myCharselect.earthtabRed_S.setPosition(330,384);

            window.draw(myCharselect.firetabRed_S);
            window.draw(myCharselect.watertabRed_S);
            window.draw(myCharselect.windtabRed_S);
            window.draw(myCharselect.earthtabRed_S);

            myCharselect.firetabBlue_S.setPosition(900,384);
            myCharselect.watertabBlue_S.setPosition(1010,384);
            myCharselect.windtabBlue_S.setPosition(1120,384);
            myCharselect.earthtabBlue_S.setPosition(1230,384);

            window.draw(myCharselect.firetabBlue_S);
            window.draw(myCharselect.watertabBlue_S);
            window.draw(myCharselect.windtabBlue_S);
            window.draw(myCharselect.earthtabBlue_S);
        }


        window.display();
    }
    return 0;
}
