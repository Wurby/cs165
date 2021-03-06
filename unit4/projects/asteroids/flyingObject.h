/*************************************************************
 * File: flyingobject.h
 * Author: Joshua Pearson
 *
 * Description: flying object class
 *************************************************************/

#ifndef FLYINGOBJECT_H
#define FLYINGOBJECT_H

#include "point.h"
#include "velocity.h"
#include "uiDraw.h"

// TODO: Rotation should not be in flyingObject, as it only applies to the rocks and ship.

class FlyingObject
{
 protected:
   Point position;
   Velocity velocity;
   bool alive;

 public:
   //contructors
   FlyingObject()
   {
      position.setX(random(0, 201));
      position.setY(random(0, 201));
   }
   FlyingObject(Point &position, Velocity &velocity)
   {
      this->position = position;
      this->velocity = velocity;

      setAlive(true);
   }

   //methods
   void kill();
   void advance();
   virtual void draw() = 0;

   // getters
   Point getPoint() const
   {
      return position;
   }
   Velocity getVelocity() const
   {
      return velocity;
   }
   bool isAlive() const
   {
      return alive;
   }

   // setters
   void setPoint(const Point &point)
   {
      position = point;
   }
   void setVelocity(const Velocity &velocity)
   {
      this->velocity = velocity;
   }
   void setAlive(const bool &alive)
   {
      this->alive = alive;
   }
};
#endif
