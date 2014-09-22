//PROGRAMMER: KELSEY MARICIC    DATE: 10/12/11
//PROGRAM: stackedPlatesFnctn.cpp
//SECTION: 3D
//PURPOSE: The user can add to, remove from, and view info on a stack of plates

#include<iostream>
using namespace std;
#include "stackedPlates.h"

void printStack(const int stack[], const int& currentSize)
{
  cout<<"The number of the plates, from top to bottom, are:"<<endl;
  
  if(currentSize == 0) //if there are no plates in the stack
    cout<<"There are no plates in the stack"<<endl;
  else  //if there are plates in the stack, prints out their numbers in order from top to bottom
  {
    for(int i = currentSize-1; i > 0; i--)
    {   
      cout<<stack[i]<<", ";
    }
  
    cout<<stack[0]<<endl<<endl;
  }
}

bool addToStack(int stack[], const int& toAdd, int& currentSize, const int& maxSize)
{
  if(currentSize == maxSize)
    return false;
    
  stack[currentSize] = toAdd;
  
  currentSize++;
  
  return true;
}

bool removeFromStack(int stack[], int& currentSize)
{
  if(currentSize == 0)
    return false;
   
  stack[currentSize - 1] = 0;
     
  currentSize--;
  
  return true;
}
