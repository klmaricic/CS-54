//PROGRAMMER: KELSEY MARICIC  DATE: 10/19/11
//PROGRAM: coordinates.cpp
//SECTION:  3D
//PURPOSE: Outputs coordinates of different types

#include<iostream>
using namespace std;
#include "coordinates.h"

int main()
{
  cout<<"Hello! This program outputs coordinates of different types."<<endl<<endl;
  
  //sends coordinates that are printed out in a coordinate format
  outputCoords<int>(6, 293);
  outputCoords<string>("14-17i", "3i");
  outputCoords<double>(9.3, -1.5, 10.2);
  outputCoords<string>("9000i", "7", "i");
  
  cout<<"Thank you for using this program. Goodbye!"<<endl;
  
  return 0;
}
