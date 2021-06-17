#pragma once
#include "Behaviour.h"
#include"ButtonFunction.h"
class Button :
    public Behaviour
{
public:
    //Takes the window to be able to find cursor
    Button(sf::RenderWindow* window);

    //updates the button
    void Update(float dt);

private:
    sf::RenderWindow* Window;
    ButtonFunction* Function;
};

