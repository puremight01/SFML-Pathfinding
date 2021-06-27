#pragma once
#include "Behaviour.h"
#include"ButtonFunction.h"
#include"Loader.h"
class Button :
    public Behaviour
{
public:
    //Takes the window to be able to find cursor
    Button(sf::RenderWindow* window, ButtonFunction* Function);

    //updates the button
    void Update(float dt);

private:
    sf::RenderWindow* Window;
    ButtonFunction* Function;
    sf::Text ButtonText;
};

