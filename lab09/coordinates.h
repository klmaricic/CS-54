//PROGRAMMER: KELSEY MARICIC  DATE: 10/19/11
//PROGRAM: coordinates.h
//SECTION:  3D
//PURPOSE: Outputs coordinates of different types

#include<iostream>
using namespace std;
#ifndef coordinates_h
#define coordinates_h

//Prints out  a 2-point coordinate
//Pre:<< must be defined for both template parameters
//Post: Outputs a 2-point coordinate to the screen
template <class T>
void outputCoords(const T& xCoord, const T& yCoord)
{
  cout<<"["<<xCoord<<", "<<yCoord<<"]"<<endl<<endl;
  return;
}

//Prints out  a 3-point coordinate
//Pre:<< must be defined for all template parameters
//Post: Outputs a 3-point coordinate to the screen
template <class T>
void outputCoords(const T& xCoord, const T& yCoord, const T& zCoord)
{
  cout<<"["<<xCoord<<", "<<yCoord<<", "<<zCoord<<"]"<<endl<<endl;
  return;
}

#endif
