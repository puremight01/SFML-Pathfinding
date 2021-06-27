#include "Flock.h"
#include"Externs.h"
#include<iostream>


int s = 0;
int a = 0;
int c = 0;
int S = 0;
int A = 0;
int C = 0;

Flock::Flock(std::vector<Flock*>* TheFlock)
{
    this->TheFlock = TheFlock;
    TheFlock->push_back(this);
    Velocity = sf::Vector2f(float(rand() % 3 -1), float(rand() % 3 - 1));
   
}

void Flock::Update(float dt)
{   
    
    //update velocity
    Direction();

    //move if i exist and then apply boarder rule
    if (Self != nullptr )
    {
        Self->setPosition(Self->getPosition() + (Velocity * dt * (float)speed));
        BorderRule();
    }
    Position = Self->getPosition();
}

void Flock::Direction()
{
    sf::Vector2f Total = sf::Vector2f(0, 0);
    sf::Vector2f Sep = separate() * 1.5f;   // Separation
    sf::Vector2f Ali = align()* 1.0f;      // Alignment
    sf::Vector2f Coh = cohesion() * 1.0f;   // Cohesion
    if (Ali.x < 0)
    {
        A++;
    }
    else if(Ali.x > 0)
    {
        a++;
    }
    if (Coh.x < 0)
    {
        C++;
    }
    else if (Coh.x > 0)
    {
        c++;
    }
    if (Sep.x < 0)
    {
        S++;
    }
    else if (Sep.x > 0)
    {
        s++;
       
    }

    sf::Vector2f DesiredDirection = Behaviour::Normalize(Sep + Ali + Coh);
    

    //normalise the velocity
    Velocity = Behaviour::Normalize(Velocity);

    //finds the steering force and changes it based on our acceleration constant
    sf::Vector2f SteeringForce = DesiredDirection - Velocity;
    Velocity += SteeringForce * AccelConst;

}

sf::Vector2f Flock::separate()
{
    float separation = 30.0f;
    sf::Vector2f steer;
    int count = 0;
    //check to see if too close to others in the flock 
    for (auto i = TheFlock->begin(); i < TheFlock->end(); i++) 
    {
        auto p = *i;
        float distance = sqrt((Position.x - p->Position.x) * (Position.x - p->Position.x) + (Position.y - p->Position.y) * (Position.y - p->Position.y));
        // if too close
        if (separation >= distance && distance > 0) {
            // point away from other (scaled by how close they are
            sf::Vector2f dirrection = -Behaviour::Normalize(p->Position - Position) / distance;
            steer += dirrection;
            //counts how many are too close
            count++;            
        }
    }
    // average the steeting based on how many others were too close
    if (count > 0) {
        steer = steer / (float)count;
    }

    // as long as steer is non 0
    if (steer.x > 0 || steer.y > 0) 
    {
        steer = Behaviour::Normalize(steer);
    }

    return steer;
}

sf::Vector2f Flock::align()
{

    float neighbordist = 75.0f;
    sf::Vector2f sum;
    int count = 0;
    for (auto i = TheFlock->begin(); i < TheFlock->end(); i++)
    {
        auto p = *i;
        float distance = sqrt(((Position.x - p->Position.x) * (Position.x - p->Position.x)) + ((Position.y - p->Position.y) * (Position.y - p->Position.y)));
        if ((distance <  neighbordist) && (distance > 0) ) {
            sum = sum + p->Velocity;
            count++;
        }
    }
    if (count > 0) {
        sum = Behaviour::Normalize(sum);
        return sum;
    }
    else 
    {
        return sf::Vector2f(0,0);
    }

}

sf::Vector2f Flock::cohesion()
{

    float neighbordist = 75.0f;
    sf::Vector2f sum;
    int count = 0;
    for (auto i = TheFlock->begin(); i < TheFlock->end(); i++)
    {
        auto p = *i;
        
        float distance = sqrt((Position.x - p->Position.x) * (Position.x - p->Position.x) + (Position.y - p->Position.y) * (Position.y - p->Position.y));
        if ((distance > 0) && (distance < neighbordist)) {
            sum += p->Position; 
            count++;
        }
    }
    if (count > 0) {
        sum = sum/float(count);
        sum = Behaviour::Normalize(sum-Position);
    }
    else {
        return sf::Vector2f(0,0);
    }

}
