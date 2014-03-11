#include "MainMenu.h"

MainMenu::MainMenu()
{
    if (!backround.loadFromFile("backround.png")){}
    backround_S.setTexture(backround);
}
MainMenu::~MainMenu()
{}

bool MainMenu::checkmenu(RenderWindow &bob, Event &event)
{
    if (event.type == sf::Event::MouseButtonPressed)
        {
            if (event.mouseButton.button == sf::Mouse::Right)
                {

                    return false;
                }
        }
    else
    {
        menu(bob);
        return true;
    }


}
void MainMenu::menu(RenderWindow &windowMenu)
{
    windowMenu.draw(backround_S);
}
