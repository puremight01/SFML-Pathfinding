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
    int speed = 100;
    int spindir;
    float timer;

    //circle variables
    float Radius = .05f;
    float point;
    float jitter = 0.0001f;
};

