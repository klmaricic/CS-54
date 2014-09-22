//PROGRAMMER: Kelsey Maricic DATE: 11/9/11
//PROGRAM: carFnctns.cpp
//Purpose: Keeps track of how many miles each of the company’s cars are supposed to have gone
//SECTION:3D

#include "car.h"

void Car:: readFromStream(istream & inputStream)
{
  inputStream>>make;
  inputStream>>year;
  inputStream>>mileage;
}  


void Car:: writeToStream(ostream & outputStream)const
{
  outputStream<<make;
  outputStream<<' ';
  outputStream<<year;
  outputStream<<' ';
  outputStream<<mileage<<endl<<endl;
} 


void Car:: drive(const float distance)
{
  if(distance > 0)
    mileage += distance;
}
