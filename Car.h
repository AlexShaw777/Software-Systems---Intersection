#ifndef __VEHICLE_BASE_H__
#define __VEHICLE_BASE_H__

#include "VehicleBase.h"

class Car
{
  private:
     const int length;
     static int start;
     static int end;

   public:
     Car();
     Car(const Car& other); // copy
     Car(const Car& other); // move
     ~Car();

     int getStart();
     int getEnd();
     void moveForward(vector<VehicleBase*> road, int ticksTillRed);
     void moveRight(vector<VehicleBase*> road1, vector<VehicleBase*> road1, int ticksTillRed);
};

#endif
