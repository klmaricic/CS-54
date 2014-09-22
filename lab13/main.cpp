// Programmer: Brian Goldman Date: 11/16/2011
// File: main.cpp Class: CS 54
// Description: This is a test driver for your BigInt class

#include "BigInt.h"
#include <limits.h>
#include <iostream>
using namespace std;

int main()
{
  // creates a BigInt with default values
  BigInt zero;
  // creates a BigInt with initialized values (Starts as 1)
  BigInt movingOne(1, -2);
  // test the BigInt functions
  cout<<"Zero:                      "<<zero<<endl;
  cout<<"One:                       "<<movingOne<<endl;
  !movingOne;
  cout<<"Ten:                      "<<movingOne<<endl;
  !movingOne;
  cout<<"100:                     "<<movingOne<<endl;
  // creates a really large negative number
  BigInt biggerThanPossible(-INT_MAX, 12);
  cout<<"WOH: "<<biggerThanPossible<<endl;
  return 0;
}
