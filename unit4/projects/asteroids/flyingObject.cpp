/*************************************************************
 * File: flyingobject.cpp
 * Author: Joshua Pearson
 *
 * Summary: Doesn't do anything... Yet.
 *************************************************************/

#include "flyingObject.h"

void FlyingObject::advance(/*topLeft, bottomRight*/)
{
/*
Advance must now handle screen wrapping.
*/

   // position.addX(velocity.getDx());
   // position.addY(velocity.getDy());
   position.setY(position.getY() + velocity.getDy());
   position.setX(position.getX() + velocity.getDx());
}
void FlyingObject::kill()
{
   alive = false;
}
