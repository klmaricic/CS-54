//PROGRAMMER: Kelsey Maricic DATE: 11/9/11
//PROGRAM: assgn12.cpp
//Purpose: Keeps track of how many miles each of the company’s cars are supposed to have gone
//SECTION: 3D

#include<iostream>
#include<fstream>
#include "car.h"
using namespace std;

int main()
{
  ifstream fin;
  ofstream fout;
  char fileName[30];
  Car car;
  float distance;
  
  //makes sure the user input is a valid file name
  do
  {
    cout<<"Enter the name of a file that contains a car"<<endl<<endl;
    cin>>fileName;
  
    fin.clear();
    fin.open(fileName);
    
    if(!fin)
      cout<<"That is an invalid file name. Please try again."<<endl<<endl;
  }while(!fin);
  
  car.readFromStream(fin);
  
  fin.close();
  
  fout.open(fileName);
  
  cout<<"These are the stats of the car:"<<endl;
  car.writeToStream(cout);
  
  cout<<"How many miles has the car been driven?"<<endl;
  cin>>distance;
  
  car.drive(distance);
  
  //outputs the changed stats to the screen
  cout<<"The new stats on the car are:"<<endl;
  car.writeToStream(cout);  
  
  //rewrites the file
  car.writeToStream(fout);
  
  fout.close();    
  
  return 0;
}


