#ifndef MAINMENU_H
#define MAINMENU_H
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;

class MainMenu
{
    public:
        MainMenu();
        void menu(RenderWindow &windowMenu);
        bool checkmenu(RenderWindow &bob, Event &event);
        virtual ~MainMenu();

    protected:
    private:
    Texture backround;
    Sprite backround_S;

};


#endif // MAINMENU_H
