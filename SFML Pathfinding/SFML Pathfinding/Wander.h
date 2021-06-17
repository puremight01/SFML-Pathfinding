#pragma once
#include "Behaviour.h"
#include<math.h>

class Wander :
    public Behaviour
{
public:
    //creates the behaviour
    Wander();

    //moves the sprite 
    void Update(float dt);

private:
    //moving variables
    int speed = 250;
    int spindir;
    float timer;

    //circle variables
    float Radius = .5f;
    float point;
    float jitter = 0.001f;
};

