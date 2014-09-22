//PROGRAMMER: Kelsey Maricic DATE: 11/9/11
//PROGRAM: car.h
//Purpose: Keeps track of how many miles each of the company’s cars are supposed to have gone
//SECTION:3D

#ifndef CAR_H
#define CAR_H
#include<fstream>
using namespace std;

//readFromStream:
//reads the make, year, and mileage from the user-specified model
//pre:The file it is reading from must have the info formatted correctly and be open
//post: assigns the variable of the calling object to the values taken from the file

//writeToStream:
//outputs the info of the calling object of the Car class
//pre:stream has to be open
//post: outputs the variables of the calling object to the stream

//drive:
//updates the mileage of the calling object
//pre: distance should be a positive number
//post: adds on the designated distance to the mileage of the car
class Car
{
  public:
    void readFromStream(istream & inputStream);
    void writeToStream(ostream & outputStream)const;
    void drive(const float distance);
    
  private:
    string make;
    int year;
    float mileage;
};  

#endif
